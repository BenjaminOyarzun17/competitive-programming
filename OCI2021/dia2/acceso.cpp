
#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){

    ll M, N, U, V, F,E;
    cin>>M>>N;

    vector<ll>Mv(M);

    vector<ll>Nv(N);
    for(auto &x: Mv)cin>>x;

    for(auto &x: Nv)cin>>x;
    ll suma=0;
    cin>>U>>V>>F;
    cin>>E;

    vector<<pair<ll,ll>>legales;
    for(int i = 0 ; i< M ; i++){
        for(int j = 0; i< N; j++){
            if(Mv[i]==1 && )

        }

    }



    while(E--){
        ll a, b, c;
        cin>>a>> b>>c;
        bool horiz = false;
        bool vert= false;
        if(c==0){
            horiz= true;
        }else{
            vert= true;
        }
        if(a>U && vert){
            a= a+1;
        }
        if(b>V && horiz){
            b= b+1;
        }
        

        if(horiz && Mv[a-1]==1){
            if(F>= abs(a-U)+ abs(b-V)){
            cout<<a<<" "<<b<<endl;
            suma ++;
            }
        }
        if(vert && Nv[b-1]==1){
           if(F>= abs(a-U)+ abs(b-V)){
            cout<<a<<" "<<b<<endl;
            suma ++;
             }   
        }

         


    }
   cout<<suma<<endl;
}





int main(){

	solve();
	return 0;


}
