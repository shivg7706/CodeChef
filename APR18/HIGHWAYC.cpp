#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n, s, y;
		int *velocity = new int [n];
		int *direction = new int [n];
		int *ipoints = new int [n];
		int *fpoints = new int [n];
		int *length = new int [n];
		double time = 0.0, pass_time = (double)y/s;

		for(int i = 0; i < n; i++) {
			if(direction[i] == 0)
				fpoints[i] = ipoints[i] + length[i]
			else
				fpoints[i] = ipoints[i] - length[i]
		}

		for(int i = 0 ; i < n ; i++) {
			if(direction[i]==0){
				if(ipoints[i] >= 0 && fpoints[i]>0){
					if(pass_time < (double)abs(ipoints[i])/velocity[i])
						time += pass_time;
					else
						time += (double)abs(fpoints[i])/velocity[i];

				}else{
					if(ipoints[i])

				}
			}

			
		}
	}
return 0;
}