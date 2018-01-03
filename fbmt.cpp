#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,r,k;
		int n,b=0;
		cin>>n;
		cin>>s;
		for(int i=1;i<n;i++)
		{
			cin>>r;
			if(r!=s){b++;k=r;}
		}
		if(b<n-b)cout<<s<<endl;
		else if(b>n-b)cout<<k<<endl;
		else cout<<"Draw\n";
	}
}