#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int *a=new int [n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	while(q--)
	{
		int w,i,x;
		cin>>w>>i>>x;
		if(w==1)
		{
			a[i-1]=x;
		}
		if(w==2)
		{	int s=a[0];int l=0;
			if(a[0]==x)l++;
			for(int j=1;j<i;j++)
			{
				s^=a[j];
				if(s==x)
					l++;

			}
			cout<<l<<endl;
		}
	}	
}