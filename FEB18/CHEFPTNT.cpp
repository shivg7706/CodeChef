#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,k,even=0,odd=0,sum=0;
		cin>>n>>m>>x>>k;
		string s;
		cin>>s;
		for(int i=0;s[i];i++)
		{	
			if(s[i]=='E')even++;
			else odd++;
		}
		for(int i=0;i<m/2;i++)
		{
			sum+=min(x,even);
			even-=min(x,even);
		}
		for(int i=0;i<m-m/2;i++)
		{
			sum+=min(x,odd);
			odd-=min(x,odd);
		}

		if(sum>=n)cout<<"yes\n";
		else cout<<"no\n";
	}
return 0;
}