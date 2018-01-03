#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,r=0,g=0;
		cin>>n>>m;
		string *s=new string[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
		for(int i=0;i<n;i++)
		{
			for(int j=i%2;j<m;j+=2)
			{
				if(s[i][j]!='R')
					r++;
				if(s[i][j]!='G')
					g++;
			}
		}
		//cout<<r<<" "<<g;
		int r1=0,g1=0;
		for(int i=0;i<n;i++)
		{
			for(int j=(i+1)%2;j<m;j+=2)
			{
				if(s[i][j]!='R')
					r1++;
				if(s[i][j]!='G')
					g1++;
			}
		}
		//cout<<endl<<r1<<" "<<g1<<endl;
		int c1=r*3+g1*5;
		int c2=g*5+r1*3;
		cout<<min(c1,c2)<<endl;

	}
}