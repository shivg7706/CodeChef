#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	scanf("%d",&n);
	int *h=new int[n];
	for(int i=0;i<n;i++)
		scanf("%d",&h[i]);
	scanf("%d",&q);
	int x,y;
	for(int i=0;i<q;i++)
	{
		int c=0;
		scanf("%d%d",&x,&y);
		for(int j=0;j<n;j++)
		{
			if((j & x)==j)
				if(h[j]>0)
					h[j]=h[j]-y;
		}
		for(int j=0;j<n;j++)
		{
			if(h[j]>0)c++;

		}
		printf("%d\n",c );

	}
return 0;
}