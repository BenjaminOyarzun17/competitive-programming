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






ll msas(vll &a){
	ll cg = a[0];
	ll ans = a[0];
	for(int i = 1; i< n ; i++){
		cg= max(a[i], cg+a[i]);
		ans = max(cg, ans);
	}

	return ans;	
}










ll msas(&a){
	ll cg=a[0];
	ll sol =a[0];
	for(int i= 0 ; i< a.size(); i++)	{
		cg = max(a[i], cg+a[i]);
		sol = max(cg, sol);
	}
	return sol;

}







ll msas(&a){
	ll cs;
	ll cg;
	cs = a[0];
	cg = a[0];
	for(int i = 1; i < a.size() ; i++){
		cg= max(a[i], cg+ a[i]);
		cs = max(cs, cg);
	}
	return cg;
}

ll msas(vll &a){
	cuma= a[0];
	cumasu= a[0];
	for(int i=1; i < a.size() ; i++){
		cuma = max(a[i], cuma+a[i]);
		cumasu= max(cumasu, cuma);//la respuesta es el maximo del current maximum!
	}
	return cumasu;
}



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}


