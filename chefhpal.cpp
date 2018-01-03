#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
		while(t--)
		{
		int n,a;
		cin>>n>>a;
		if(a==1)
		{
		
		cout<<n<<" ";
		while(n--)cout<<"b";
		}
		else 
		{
			if(a==2)
			{
			switch(n)
			{
			case 1:cout<<"1"<<" "<<"a";break;
			case 2:cout<<"1"<<" "<<"ab";break;
			case 3:cout<<"2"<<" "<<"aab";break;
			case 4:cout<<"2"<<" "<<"aabb";break;
			case 5:cout<<"3"<<" "<<"aaaba";break;
			case 6:cout<<"3"<<" "<<"aaabab";break;
			case 7:cout<<"3"<<" "<<"aaababb";break;
			case 8:cout<<"3"<<" "<<"aaababbb";break;
			case 9:cout<<"4"<<" "<<"aaaababbb";break;
			case 10:cout<<"4"<<" "<<"aaaababbbb";break;
			}
			cout<<endl;
			
		}
		else
		{
		char c='a';
		cout<<"1 ";
		for(int i=0;i<n;i++)
		{
		cout<<c++;
		if((i+1)%a==0)
		c='a';
		}
		cout<<endl;}}}
return 0;
}
		
	
