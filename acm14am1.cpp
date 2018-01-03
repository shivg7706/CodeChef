#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,th,c=0;
		cin>>n>>th;
		int *a=new int [n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			if(a[i]>=th)c++;
		cout<<c<<endl;
	}
}