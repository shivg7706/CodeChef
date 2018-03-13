#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,front=0,back=0;
		cin>>n;
		int *a = new int [n];
		int *b = new int [n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
		{	
			if(a[i]<=b[i])front++;
			if(a[i]<=b[n-i-1])back++;
		}
		if(front==n && back == n){cout<<"both\n";continue;}
		else if(front == n){cout<<"front\n";}
		else if(back == n){cout<<"back\n";}
		else cout<<"none\n";
	}
return 0;
}