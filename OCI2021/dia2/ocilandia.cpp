#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){

    ll n;
    vector<ll>largos;
    cin>>n;
    for(int i = 0 ; i< n; i++){
        ll g;
        cin>>g;
        largos.push_back(g);
    }
    ll minimo=1000000000;
    for(auto x: largos){
        ll sumaLocal=0;
        for(int i =0 ; i<x; i++){
            ll l;
            cin>>l;
            sumaLocal+= l;

        }
        minimo= min(minimo, sumaLocal);
    }
    cout<<minimo<<endl;

}





int main(){

	solve();
	return 0;


}
