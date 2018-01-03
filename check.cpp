    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		string s,r,k;
    		int n,a=1,b=0;
    		cin>>n;
    		cin>>s;
    		for(int i=0;i<n-1;i++)
    		{
    			cin>>r;
    			if(r==s)a++;
    			else {b++;k=r;}
    		}
    		if(a>b)cout<<s<<endl;
    		else if(a<b)cout<<k<<endl;
    		else cout<<"Draw"<<endl;
     
     
     
    	}
    } 