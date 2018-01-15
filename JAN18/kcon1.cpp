#include<bits/stdc++.h>
using namespace std;
long long int maxsubarrsum(long long a[], int size)
{
   long long int mr = a[0];
   long long int cm = a[0];
 
   for (int i = 1; i < size; i++)
   {
        cm= max(a[i],cm+a[i]);
        mr = max(mr, cm);
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
            long long s2=0;
            cin>>n>>k;
            long long sum_l=0,sum_r=0,ss=0;
            long long int *a=new long long int [2*n];
           for(int i=0;i<n;i++)
                {cin>>a[i]; a[n+i]=a[i];ss+=a[i];}
            long long int s=0;
            if(k==1)
            {
                cout<<maxsubarrsum(a,n)<<endl; continue;;
            }

            for(int i=0;i<n;i++)
            {
                s+=a[i];if(s>sum_l)sum_l=s;
            }
            s=0;
            for(int i=n-1;i>=0;i--)
            {
                s+=a[i];if(s>sum_r)sum_r=s;
            } 

            long long int ms = maxsubarrsum(a,2*n);

 			if(ss>0){ s2=sum_l+(k-2)*ss+sum_r;}
            if(ss<0)
                {cout<<ms<<endl;continue;}
                 cout<<max(s2,ms)<<endl;
        }   
    }
     