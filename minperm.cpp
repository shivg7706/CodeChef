#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1){cout<<"1\n";continue;}
		if(n%2==0)
		{
			for(int i=1;i<=n/2;i++)
				cout<<2*i<<" "<<2*i-1<<" ";
		}
		else
		{
			for(int i=1;i<n/2;i++)
				cout<<2*i<<" "<<2*i-1<<" ";
			cout<<n-1<<" "<<n<<" "<<n-2;
		}
		cout<<endl;
	}
}