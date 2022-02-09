#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<ll> x;
		set<ll> y;
		for(int i = 0; i< n ;i++){
			ll a, b;
			cin>>a>>b;
			x.insert(a);
			y.insert(b);	
		}
		cout<<x.size()+y.size()<<endl;
	}



}
