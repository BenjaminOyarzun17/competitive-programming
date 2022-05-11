#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll n;	cin>>n;
	vector<ll> a;
	for(ll i = 0 ; i< n ; i++){
		ll g;
		cin>>g;
		a.push_back(g);
	}
	sort(a.begin(), a.end(), greater<ll>());
	ll needed = a[0]-1;
	ll objective= a[0];
	for(ll i = 1 ; i< n ; i++){
		if(a[i]>=objective){
			needed--;
		}else{
			objective = a[i];
			needed = objective-(i+1);
		}
		if(needed <=0){
			//cout<<needed<<endl;
			break;	
		}
	}

	cout<<objective<<"\n";
	return 0;
}
