#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int n;	cin>>n;
	vector<ll> a;
	for(int i = 0 ; i< n ; i++){
		int g;
		cin>>g;
		a.push_back(g);
	}
	// pbcopy < [file]
	//for(auto x: a) cout<<x<<' ';
	ll possible = n;
	sort(a.begin(), a.end());


	cout<<possible<<"\n";
	return 0;
}
