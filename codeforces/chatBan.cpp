#include<bits/stdc++.h>

using namespace std;
using ll = long long;


ll binarySearch(vector<ll>&v, ll l, ll r, ll x)
{
    if (r >= l) {
        ll mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (v[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (v[mid] > x)
            return binarySearch(v, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(v, mid + 1, r, x);
    }
 
 	return l;
    //return -1;
}





void solve(){

	int t ; 
	cin>>t;
	while(t--){
		ll k , x;	
		cin>>k>>x;
		vector<ll> nemo;
		for(ll i = 1 ; i <= k ; i++){
			nemo.push_back((i*(i+1))/2);
		}
		for(ll i = k+1; i<= 2*k-1;i++){
			nemo.push_back(((i-1)*i)/2);
		}
		
		for(auto as: nemo)cout<<as<<endl;


		//int pos = binarySearch (nemo, 0, nemo.size()-1, x);
		//cout<<pos<<endl;
	}

}


int main(){

	
	solve();

	return 0 ; 
}
