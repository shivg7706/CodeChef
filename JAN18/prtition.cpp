#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,x,k=1;
    cin>>x>>n;
    if(x>n){cout<<"impossible\n";continue;}
    long long sum=0,l,sum1=0;
    if(n<4){cout<<"impossible\n"; continue;}
    string s;
    s.insert(0,n,'0');
    s[x-1]='2';
    int *a=new int [n-1];
    for(int i=0;i<n-1;i++)
    {
      if(k!=x){a[i]=k; sum+=a[i];}
      else i--;
      k++;
    }
    if(sum%2){cout<<"impossible\n"; continue;}
    l=sum/2;
    sum=0;
    //cout<<"JAI MATA DI\n";
    for(int i=0;i<n-1;i++)
    {
    	sum+=a[i];
    	s[a[i]-1]='1';
    	if(sum>l && sum-l!=x){s[sum-l-1]='0';break;}
    	else if(sum-l==x){s[sum-l]='0';s[a[i]]='1';s[a[i]-1]='0';break;}
    }
	cout<<s<<endl;
	}
}

