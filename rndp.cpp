#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,c=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	vector<int> v;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
		v.push_back(a[i]+a[j]);
		}
	sort(v.begin(),v.end());
		int m=v[0];
	for(int i=1;i<v.size();i++)
	{
		if(v[i]>m)
			{c=1;m=v[i];}
		else c++;
	}
	float d=(float)c/v.size();
	//cout<<setprecision(9)<<(double)c/((n*(n-1))/2);
	printf("%0.8f\n",d );
}
return 0;
}
		
		
			
