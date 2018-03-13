#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count = 0 ;
		string s,k;
		cin>>s;
		if(s.length()<4){cout<<"normal"<<endl;continue;}
		for(int i=0;i<s.length()-3;i++)
		{
			k=s.substr(i,4);
			sort(k.begin(), k.end());
			if(k=="cefh")count++;
		}
		if(count==0)cout<<"normal"<<endl;
		else cout<<"lovely"<<" "<<count<<endl;
	}
return 0;
}