#include <bits/stdc++.h>
using namespace std;
 int main()
 {
 	long t,n,a,b;
 	cin>>t;
 	while(t--)
 	{
 		int right=1000000001,right_t=1000000001,left=0,left_t=0;
 		cin>>n>>b;
 		int l=0,r=0,e=0;
 		for(int i=0;i<n;i++)
 		{
 			cin>>a;
 			if(a<b)
 			{
 				left_t=a;
 				if(left_t<left){l=2;}
 				else{left=a;}
 			}
 			if(a>b)
 			{
 				right_t=a;
 				if(right_t>right){r=1;}
 				else{right=a;}
 			}
 			if(a==b){e=1;}
 		}
 		if(e==1&&l==0&&r==0){cout<<"YES"<<endl;}
 		else{cout<<"NO"<<endl;}
 	}
 }