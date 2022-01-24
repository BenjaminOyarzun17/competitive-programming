#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


    ll n, V;
    cin>>n>>V;
    vector<ll>niveles(n);
    vector<ll>posibles;
    for(auto &x: niveles)cin>>x;
    for(ll i = 0; i < n ; i++){
        if(V>=niveles[i]){
           posibles.push_back(i);
        }
    }
    if(posibles.size()==0){
        cout<<"FALLIDA"<<endl;
    }else{
        
        ll fallidosCount = 0;
        for(auto x: posibles){
            ll i, j;
            ll nivelLocal = V;
            vector<ll>path;
            i = x;
            j = x;
            bool victory = false;
            path.push_back(x);
            ll count = 0;
            nivelLocal++;
            while(true){
                //cout<<i<<' '<<j<<endl;
                if(niveles[i-1]<= nivelLocal && i>0 ){

                    i--;
                    nivelLocal++;

                    path.push_back(i);
                }

                if(niveles[j+1]<=nivelLocal && j<n-1){
                    j++;
                    nivelLocal++;

                    path.push_back(j);
                }
                if(i ==0){
                    if(j==n-1){
                        victory = true;
                        break;
                    }else{
                        if(niveles[j+1]>nivelLocal){
                            break;
                        }else{
                            nivelLocal++;
                            j++;

                            path.push_back(j);
                        }
                    }
                }

                if(j == n-1){
                    if(i ==0){
                        victory = true;
                        break;
                    }else{
                        if(niveles[i-1]>nivelLocal){
                            break;
                        }else{
                            nivelLocal++;
                            i--;

                            path.push_back(i);
                        }
                    }
                }
                if(niveles[i-1]>nivelLocal && niveles[j+1]>nivelLocal && i>0 && j< n-1){
                    break;
                }
                if(count>n+10){
                    
                    break;
                }
                count++;

            }
            if(victory){
                for(auto owo: path){
                    cout<<owo<<' ';
                }
                        cout<<endl;
                break;
            }else{
                fallidosCount++;

            }


        }
        //cout<<fallidosCount<<endl;
            if(fallidosCount==(ll)posibles.size()){
                cout<<"FALLIDA"<<endl;
            }



    }

}





int main(){

	solve();
	return 0;


}
