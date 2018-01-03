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
		int *a=new int [n];
		int *b=new int [n];
		vector <int> v;
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(n==1){cout<<"0"<<endl<<a[0]<<endl;continue;}
		if(n==2 && (a[0]==a[1])){cout<<0<<endl<<a[1]<<" "<<a[1]<<endl;continue;}
		if(n==3 && (a[0]==a[1]||a[0]==a[2]||a[1]==a[2])){cout<<"2"<<endl;for(int i=1;i<3;i++)cout<<a[i]<<" ";cout<<a[0];cout<<endl;continue;}
		int k=0;
		for(int i=1;i<n;i++)
		{
			if(a[k]!=a[i])
				{b[k]=a[i];k++;}
			else {v.push_back(a[i]);}
		}
		v.push_back(a[0]);
		for(int i=0;i<v.size();i++)
			b[i+k]=v[i];
		if(a[n-1]==b[n-1])
			swap(b[n-1],b[1]);
		
		cout<<n<<endl;
		for(int i=0;i<n;i++)cout<<b[i]<<" ";
		cout<<endl;

	}
}