#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		vector<int > v;
		int **a=new int *[n];
		for(int i=0;i<n;i++)
			a[i]=new int [n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		
		int max=a[n-1][0],m;

		for(int i=1;i<n;i++)
			if(a[n-1][i]>max)
				{
					max=a[n-1][i];
				}
		v.push_back(max);

		for(int i=n-2;i>=0;i--)
		{
		sort(a[i],a[i]+n);
		if(a[i][0]>=max){flag=1; break;}
		else
		{
			for(int j=0;j<n;j++)
				if(a[i][j]<max){m=a[i][j];}
				else break;
		}
		
		v.push_back(m);
		max=m;
		}
		if(flag){cout<<"-1\n";continue;}
		long long int sum=0;
		for(int i=0;i<v.size();i++)
		{
			sum+=v[i];
		}
		cout<<sum<<endl;
	}

}