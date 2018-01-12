#include<bits/stdc++.h>
using namespace std;
long long maxsubarrsum(int a[], long long size,long long mr,long long me)
{
    
 
    for (int i=0;i<size;i++)
    {
        me= me + a[i];
        if (mr < me)
            mr = me;
 
        if (me<0)
            me=0;
    }
    return mr;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int *a=new int [n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long ms=0;
        long long mr=INT_MIN, me=0;
        for(int i=1;i<k;i++)
        {
        
        ms = maxsubarrsum(a, n,mr,ms);
        
        }
        
        cout<<ms<<endl;

    }   
}
