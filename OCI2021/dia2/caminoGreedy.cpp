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


    ll suma1 = 0;
    int ip, jp;
    
    ip= 0;
    jp = 0;
    
    while(ip!= m-1 || jp!= n-1){
        if(bajar[ip][jp]> derecha[ip][jp] && ip< m-1){
            suma1+= bajar[ip][jp];
            ip++;
        }
        //cout<<ip<<' '<<jp<<endl;
        if(bajar[ip][jp]<= derecha[ip][jp] && jp<n-1){
            suma1+= derecha[ip][jp];
            jp++;
        }
        //cout<<ip<<' '<<jp<<endl;
        if(ip==m-1 && jp<n-1){
            suma1+= derecha[ip][jp];
            jp++;
        }
        //cout<<ip<<' '<<jp<<endl;
        if(jp==n-1 && ip<m-1){
            suma1+= bajar[ip][jp];
            ip++;
        }
        //cout<<ip<<' '<<jp<<endl;
    }


    ll suma2 = 0;
    
    
    ip= 0;
    jp = 0;
    
    while(ip!= m-1 || jp!= n-1){
        if(bajar[ip][jp]>= derecha[ip][jp] && ip< m-1){
            suma2+= bajar[ip][jp];
            ip++;
        }
        //cout<<ip<<' '<<jp<<endl;
        if(bajar[ip][jp]< derecha[ip][jp] && jp<n-1){
            suma2+= derecha[ip][jp];
            jp++;
        }
        //cout<<ip<<' '<<jp<<endl;
        if(ip==m-1 && jp<n-1){
            suma2+= derecha[ip][jp];
            jp++;
        }
        //cout<<ip<<' '<<jp<<endl;
        if(jp==n-1 && ip<m-1){
            suma2+= bajar[ip][jp];
            ip++;
        }
        //cout<<ip<<' '<<jp<<endl;
    }

    ll suma3= 0;
    if(m>=n){
        ll s1 = 0;
        ll s2= 0;
        for(int i =1 ; i< n-1; i++){
            s1+= derecha[1][i];
        }
        for(int i = 1; i< m-1; i++){
            s1+= bajar[i][n-1];
        }

        for(int i = 1; i< m-1; i++){
            s2+= bajar[i][1];
        }
        for(int i =1 ; i< n-1; i++){
            s2+= derecha[m-1][i];
        }
        suma3=max(s1,s2);

    }else{
        ll s1 = 0;
        ll s2= 0;
        for(int i =1 ; i< n-1; i++){
            s1+= derecha[1][i];
        }
        for(int i = 1; i< m-1; i++){
            s1+= bajar[i][n-1];
        }

        for(int i = 1; i< m-1; i++){
            s2+= bajar[i][1];
        }
        for(int i =1 ; i< n-1; i++){
            s2+= derecha[m-1][i];
        }
        suma3=max(s1,s2);

    }





    cout<<max(max(suma1, suma2), suma3)<<endl;

    

}





int main(){

	solve();
	return 0;


}
