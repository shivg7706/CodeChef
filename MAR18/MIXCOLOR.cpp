#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int *a = new int [n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;i++)
			if(a[i] == a[i+1])
				count++;
		cout<<count<<"\n";
	}
return 0;
}