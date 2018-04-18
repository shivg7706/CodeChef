#include<bits/stdc++.h>
#define ll long long
using namespace std;
void get_b(string s, ll n)
{
	string str = s;
	ll temp = 0, count_a = 0, count_b = 0, counter = 0, temp_count = 0, l = 1;
	while(1)
	{
		for(int i = temp;i<s.length();i++)
		{
			if(s[i] == 'a')
				count_a++;
			else count_b++;
			if(count_a > count_b) temp_count++;
		}
		if(temp_count == counter || l == n)
			break;
		else
			counter = temp_count;
		temp = s.length();

		s += str;
		l++;
		
	}
	if(l == 1) cout<<temp_count<<endl;
	else cout<<counter<<endl;
}
void get_a(string s, ll n)
{
	string str = s;
	ll temp = 0, count_a = 0, count_b = 0, counter = 0, temp_count = 0, l = 1;
	while(1)
	{
		for(int i = temp;i<s.length();i++)
		{
			if(s[i] == 'a')
				count_a++;
			else count_b++;
			if(count_a > count_b) temp_count++;
		}
		if(temp_count == str.length())
		{	
			cout<<counter + (n-l+1)*str.length()<<endl;
 			break;
		}
		else
			counter += temp_count;
		temp = s.length();

		s += str;
		if(l == n)
		{
			cout<<counter<<endl;
			break;
		}
		l++;
		temp_count = 0;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n, count_a = 0,count_b = 0, counter = 0;
		string s;
		cin>>s>>n;
		if(n<1000)
		{
			ll count = 0;
			string str = s;
			for(int i=1;i<n;i++)
				s += str;
			for(int i = 0; i < s.length(); i++)
			{
				if(s[i] == 'a')
					count_a++;
				else count_b++;
				if(count_a > count_b)
					count++;
			}
			cout<<count<<endl;
		}
		else
		{

			for(int i=0;i<s.length();i++)
			{
				if(s[i] == 'a')
					count_a++;
				else count_b++;
				if(count_a > count_b) counter++;
			}
			if(count_a == count_b)
				cout<<n*counter<<endl;
			else
			{
				if(count_a > count_b)
					get_a(s, n);
				else
				{
					if(count_a < count_b)
						get_b(s, n);
				}
			}
		}
	}
return 0;
}