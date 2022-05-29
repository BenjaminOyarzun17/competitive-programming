#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main(){
	
	ll n ;	cin>>n;
	vll a(n);
	for(auto &x: a) cin>> x;

	ll sol = 0 ;
	ll count = 1 ;
	for(int i = 0 ; i< n-1 ; i++){
		if(a[i]<a[i+1]){
			count++;
		}else{
			sol = max(count, sol);
			count = 1;
		}
	}
	sol = max(count, sol);
	cout<<sol<<'\n';
	return 0;
}
