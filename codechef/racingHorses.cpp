#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;	
		vector<ll> h(n);
		for(auto &x: h) cin>>x;
		sort(h.begin(), h.end());
		ll mi = 10000000001; 
		for(int i =0 ; i< n-1; i++){
			ll dif = h[i+1]-h[i];
			mi = min(mi, dif);
		}
		cout<<mi<<endl;		

	}

}
