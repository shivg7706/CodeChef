#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b;
cin>>t;

string s;

for(int i=0;i<t;i++)
{
a=0;b=0;
	cin>>s;
	vector< pair<char,int> > c;

	for(int j=0;j<s.length();j++)
	{
		if(s[j]=='A'||s[j]=='B')
		c.push_back(  make_pair(s[j],j));
	}
	for(int j=1;j<c.size();j++)
		if(c[j].first==c[j-1].first)
		{
		if(c[j].first=='A')
		a+=c[j].second-c[j-1].second-1;
		if(c[j].first=='B')
		b+=c[j].second-c[j-1].second-1;
		}
	for(int j=0;j<c.size();j++)
	{
	if(c[j].first=='A')
	a++;
	if(c[j].first=='B')
	b++;
	}

	cout<<a<<" "<<b<<endl;
}
return 0;
}

