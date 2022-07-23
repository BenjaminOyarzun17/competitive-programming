
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




vvll build(){
	vvll st(n, vll (k+1));
	for(int i = 0 ;i< n; i++){
		st[i][0]= a[i];
	}
	for(int j = 1; j<=k ; j++){
		for(int i = 0 ; i+ (1<<j)<= n ; i++){
			st[i][j]= st[i][j-1] +st[i+(1<<j-1)][j-1];
		}
	}
	return st;
}



ll query(ll l, ll r, ll k){
	ll sum = 0 ; 
	for(int j=k ; j>=0 ; j--){
		if((1<<j)<=r-l+1){
			sum += st[l][j];
			l+= 1<<j;
		}
	}
	return sum;


}













vvll build(vll &a, ll n, ll k){
	vvll st(n, vll (k+1));
	for(int i = 0 ;i< n; i++){
		st[i][0]= a[i];
	}
	for(int j = 1; j<=k ; j++){
		for(int i = 0; i+(1<<j)< n; i++){
			st[i][j]= st[i][j-1]+ st[i+(1<<j-1)][j-1];
		}
	}

	return st;
}
ll  query(ll l , ll r, ll k){
	ll sum = 0 ; 
	for(int j= k ; j>=0 ; j--){
		if((1<<j)<=l+r-1){
			sum+= st[l][j];
			l+= (1<<n);
		}
	}
	return sum ;

}










vvll build(vll &a, ll n, ll k){
	vvll st(n, vll (k+1));
	for(int i = 0; i< n; i++){
		st[i][0] = a[i];
	}
	for(int j= 1;j<= k ;j++){
		for(int i = 0 ; i+ (1<<j)<=n; i++){
			st[i][j]= st[i][j-1]+st[i+(1<<(j-1))][j-1]
		}
	}
	return st;
}
ll query(ll l, ll r){
	ll sum = 0 ;
	for(int j = k ; j>=0 ; j--){
		if((1<<j)<= r-l +1){
			sum+= st[l][j];
			l+= (1<<j);
		}
	}

	return sum ;	

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}







