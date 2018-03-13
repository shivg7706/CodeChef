#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		float temp,loss=0;
		cin>>n;
		int **a=new int *[n];
		for (int i = 0; i < n; ++i)
			a[i] = new int [3];
		for(int i=0;i<n;i++)
			cin>>a[i][0]>>a[i][1]>>a[i][2];
		for(int i=0;i<n;i++)
		{
			temp=(a[i][0]*a[i][1])+(a[i][0]*a[i][1])*(a[i][2]/100.0);
			temp-=temp*(a[i][2]/100.0);
			loss+=(a[i][0]*a[i][1])-temp;
		}
		printf("%0.8f",loss);	
	}

return 0;
}