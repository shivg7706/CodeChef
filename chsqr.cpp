#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		//if(k==1){cout<<"0\n";cout<<"2"<<endl;continue;}
		//cout<<(k-1)/2<<endl;
		for(int i=0;i<k;i++)
		{
        	for(int j=0;j<k;j++)
        	{
            cout<< ((k+1)/2+i+j)%k+1<<" ";
        	}
        	cout<<endl;
		}
	}
}