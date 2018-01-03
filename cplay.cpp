#include <fstream>
#include<iostream>
#include<cmath>
using namespace  std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)){
		if (s.empty())
			break;
	int a=0,b=0,k;
	for(int i=0;i<10;i++)
	{
		if(i%2==0)if(s[i]=='1')a++;
		if(i%2==1)if(s[i]=='1')b++;
		if(i>=4)
		{
			if(a>b)
			{
				if(a>b+((10-i)/2)){k=i;break;}
			}
			if(b>a)
				if(b>a+((9-i)/2)){k=i;break;}
		}
	}
	if(a>b){cout<<"TEAM-A "<<k+1<<endl;}
	if(a<b){cout<<"TEAM-B "<<k+1<<endl;}
	if(a==b)
	{
		for(int i=5;i<10;i++)
		{	
			if(s[2*i]=='1')a++;
			if(s[2*i+1]=='1')b++;
			if(a>b){cout<<"TEAM-A "<<2*(i+1)<<endl;break;}
			else{ if(a<b){cout<<"TEAM-B "<<2*(i+1)<<endl;break;}}

		}
	
	}
	if(a==b) {cout<<"TIE"<<endl;}
}

}