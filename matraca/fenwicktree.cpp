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




vll bit;
vll x;



void update(ll i, ll val){
	for(; i<=n; i+= i&(-i))bit[i]+= val;
}

ll query(ll i){
	ll sum = 0;
	for(; i>0; i-=i&(-i))sum+=bit[i];
	return sum;
}
















vll bit;
vll x;

void update(ll i, ll x){
	for(; i<=n; i+= i&(-i))bit[i]+= x;
}

ll query(ll x){
	ll sum = 0 ;
	for(int i = n ; i>0; i-=i&(-i))sum+=bit[i];
	return sum;


}






vll bit(n+1);
vll x;//size n


void update(ll i, ll val){
	for(; i<= n ;i+=i&(-i)){
		bit(i)+= val;
	}

}

ll query(ll i){
	ll ans = 0 ;
	for(; i>0 ; i-= i&(-i)){
		ans+= bit(i);
	}
	return ans;
}




vll bit(n);
vll x(n);

void update(ll i, ll val){
	for(; i	<=n; i+= i&(-i)){
		bit[i]+= val;
	}
}

void query(ll i, ll val){
	ll sum = 0 ;
	for(; i> 0;i-=i&(-i) ){
		sum+= bit[i];
	}
	return sum;
}










vll x[maxint], bit[maxint];


void update(ll i, ll val, ll n){
	for(; i< n ; i+= i&(-1))bit[i]+= val;
}

void qury(ll i){
	ll sum = 0 ;
	for(; i>0; ; i-= i&(-i)){
		sum+=bit[i];
	}
	return sum;
}


void update(ll i, ll val, ll n){
	for(; i<= n; i+=i&(-i)){
		bit[n]+= val;
	}
}
void qry(ll i){
	ll sol = 0;
	for(; i>0 ; i-=i&(-i)	){
		sol+= bit[i];
	}
	return sol;
}		

//ojo que estoy indexando desde 1!!
vll update(ll i, ll val, ll n){
	for(; i<=n; i+= i&(-i))bit[i]+= val;//hasta n pq tiene n nodos
}
vll query(ll i){
	ll sum = 0 ;
	for(; i>0; i-= i&(-i))sum+=bit[i];
	return sum ;
}
void build(vll &x){
	for(int i = 1; i<= x.size(); i++){//es importante partir de 1 por la indexacion con binarios!
		update(i, x[i]);
	}
}



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}


