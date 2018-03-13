#include<bits/stdc++.h>
#define ll long long
using namespace std;
string binary(ll n)
{
	string s;
 	for(ll i=0;i<31;i++)
 	{
 	 	if(n%2==0)
  			s.push_back('0');
   		else 
  			s.push_back('1');
   		n=n/2;
  	}
  	reverse(s.begin(),s.end());
  	return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    ll base = 1;
     
    ll len = num.length();
    for (ll i=len-1;i>=0;i--)
    {
        if (num[i] == '0')
        {
            dec_value += 0*base;
            base = base * 2;
        }
        else
        {
            dec_value += 1*base;
            base = base * 2;
        }
    } 
    return dec_value;
}
int main()
{
	ll n,q;
	long long w=2147483647;
	cin>>n>>q;
	vector<string> v;
	ll t[n+1][31];
	ll *a=new ll [n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		v.push_back(binary(a[i]));
	}
	for(ll i = 0; i < 31; ++i)
		t[0][i]=0;
	
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<31;j++)
		{
			if(v[i][j]=='0')
				t[i+1][j]=t[i][j]+1;
			else t[i+1][j]=t[i][j];
		}
	}
	for(ll i=0;i<q;i++)
	{
		ll l,r;
		string k;
		cin>>l>>r;
		for(ll j=0;j<31;j++)
		{
			
			if((t[r][j]-t[l-1][j])>(r-l+1)-(t[r][j]-t[l-1][j]))
				k.push_back('0');
			else k.push_back('1');
			
		}
		ll m=binaryToDecimal(k);
		cout<<(w^m);
		cout<<endl;

	}
return 0;
}