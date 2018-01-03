#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,p;
		cin>>n>>p;
		if(p>2)
		{	
			if(n==p)
			{
			string s;
			s.insert(0,n,'a');
			s[1]='b';
			s[s.length()-2]='b';
			cout<<s<<endl;
			}
			else
			{
			int c=n/p;
			string s;
			s.insert(0,p,'a');
			s[1]='b';
			s[s.length()-2]='b';
			for(int j=0;j<c;j++)
			cout<<s;
			cout<<endl;}
		}	
		
		else 
		cout<<"impossible"<<endl;
	}
	return 0;
}
