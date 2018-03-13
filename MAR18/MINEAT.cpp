#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,h,k,sum=0,count=0;
		cin>>n>>h;
		int *a=new int [n];
		for(ll i=0;i<n;i++)
		{	
			cin>>a[i];
			sum+=a[i];
		}
		if(sum/h==0)k=1;
		else k=sum/h;
		int m;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=k)
				m=i;
		}
		count+=m+1;
		for(ll i=k ;i<1000000000;i++)
		{
			for(ll j=m+1;j<n;j++)
			{
				count+=(a[j]/i)+1;
				if (a[j]%i==0)count--;				
			}
			if(count<=h){cout<<i<<endl;break;}
			count=0;
		}


	}
return 0;
}