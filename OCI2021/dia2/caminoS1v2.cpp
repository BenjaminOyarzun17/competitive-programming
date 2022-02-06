#include<bits/stdc++.h>

typedef long long ll;
using namespace std;












void solve(){


    ll m, n;
    cin>>m>>n;

    ll t;
    for(int i =0 ; i< n; i++){
        cin>>t;
    }
    
    ll suma = 0;
    for(ll i = 0 ; i<n ; i++){
        ll g;
        cin>>g;
        cout<<g<<endl;
        suma += g;
    }
    cout<<suma<<endl;

}





int main(){

	solve();
	return 0;


}
