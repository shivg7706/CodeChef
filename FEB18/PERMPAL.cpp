#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a[26]={0};
		string s,t;
		cin>>s;
		int b[s.length()]={0};
		t.insert(0,s.length(),'A');
		
		for(int i=0;s[i];i++)
			a[s[i]-97]++;
		int k=0;
		for(int i=0;i<26;i++)
		{
			if(a[i]%2){k++;t[s.length()/2]=(char)(i+97);}
			if(k>1){cout<<"-1\n";break;}
		}
		if(k>1)continue;
		k=0;
		for(int i=0;i<26;i++)
		{
			if(a[i]>0)
			{
				for(int j=0;j<a[i]/2;j++)
				{
					t[k]=(char)(i+97);
					t[s.length()-k-1]=(char)(i+97);
					k++;
				}
			}
		}
		for(int i=0;i<s.length();i++)
			{
				for(int j=0;j<s.length();j++)
				{
					if(t[i]==s[j])
					{
						b[i]=j+1;
						s[j]='A';
						i++;
					}

				}
				i--;
			}

		for(int i=0;i<s.length();i++)
			cout<<b[i]<<" ";
		cout<<endl;

	}
return 0;
}