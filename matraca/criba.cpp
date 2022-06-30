#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

ll INF = 1e18;
ll mod = 1e9+7;



vector<bool> criba(ll n){
	vector<bool> primo(n, true);
	primo[0]=false;
	for(int i = 0 ; i< n ; i++){
		if(!primo[i])continue;
		for(int j = i; j< n ; j++){
			if(!primo[j])continue;
			if(j%i==0){
				primo[j]=false;
			}
		}
	}	
	return primo;
}




int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);





	return 0;
}



