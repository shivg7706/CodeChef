#define q 1000000
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	 int *a=new int [2*q-1];
	 long int *b=new long int [q];
		for(int i=0;i<2*q-1;i++)
		{
			int s=0,k;int n=i+2;
				while(n>0)
				{
					k=n%10;
					if(k%2==0) s+=k;
					else s-=k;
					n=n/10;
				
				}
			a[i]=abs(s);
		}
	b[0]=a[0];
	int s=0;
	for(int i=1;i<q;i++)
	{
			s=s+2*a[2*i-1]+a[2*i];
			b[i]=b[i-1]+s;
			s=s-2*a[i]+a[2*i];	
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<b[n-1]<<endl;	
	}

}