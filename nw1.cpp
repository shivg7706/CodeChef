#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,a[7]={4,4,4,4,4,4,4};
		string s;
		cin>>d;
		cin>>s;
		int k=d-28,l;
		if(s=="mon")l=0;
		if(s=="tues")l=1;
		if(s=="wed")l=2;
		if(s=="thurs")l=3;
		if(s=="fri")l=4;
		if(s=="sat")l=5;
		if(s=="sun")l=6;
		while(k--)
		{
			a[l]++;l++;
			if(l==7)l=0;
		}
		for(int i=0;i<7;i++)cout<<a[i]<<" ";
			cout<<endl;
	}
}