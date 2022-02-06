#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


    ll m, n;
    cin>>m>>n;


    vector<vector<ll>>bajar;
    vector<vector<ll>>derecha;

   

    

    for(ll i = 0 ; i< m ; i++){
        vector<ll> dummy;
        for(ll j = 0 ; j < n; j++){
            ll g;
            cin>> g;
            dummy.push_back(g);

        }
        bajar.push_back(dummy);

    }
    for(ll i = 0 ; i< m ; i++){
        vector<ll> dummy;
        for(ll j = 0 ; j < n; j++){
            ll g;
            cin>> g;
            dummy.push_back(g);

        }
        derecha.push_back(dummy);

    }


    ll suma = 0;
    for(int i = 1; i< n; i++){
        suma+= derecha[0][i];
    }

    
    cout<<suma<<endl;

    

}





int main(){

	solve();
	return 0;


}
