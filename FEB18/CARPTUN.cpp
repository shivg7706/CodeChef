#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,d,s,c;
		cin>>n;
		ll *a=new ll [n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		cin>>c>>d>>s;
		sort(a,a+n);
		cout<<a[n-1]*(c-1)<<"\n";

	}
return 0;
}