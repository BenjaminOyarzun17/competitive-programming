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



ll bs(ll x, ll l, ll r, vll &a){
	if(l<=r){
		ll mid = (l+r)/2;
		if(a[mid]==x)return mid;
		else if(a[mid]>x)return bs(x, l , mid-1, a);
		return bs(x, mid+1, r, a);
	}
	return -1;
}

















ll bs(ll x, ll i , ll j, vll &a){
	if(i<=j){
		ll mid = (i+j)/2;
		if(a[mid]==x)return mid;
		if(a[mid]>x)return bs(x, i, mid-1, a);
		return bs(x, mid+1, j, a)
	}
	return -1;
}








ll bs(ll x, ll i , ll j, vll &a){
	if(i<=j){
		ll mid = (i+j)	/2;
		if(a[mid]==x )return mid;
		else if(a[mid]>x)return bs(x, i, mid-1, a);
		return bs(x, mid+1, j, a);
	}
	return -1;
}








ll bs(ll x, ll l , ll r, vll &a){
	if(l<=r){
		ll mid = (l+r)		/2;
		if(a[mid]==x)return mid;
		else if(a[mid]>x)return bs(x, l, mid-1, a);
		return bs(x, mid+1, r, a);
	}
	return -1;
}

ll bs(ll x, ll l , ll r , vll &a){
	if(l<=r){
		ll mid = (l+r)/2;
		if(a[mid ]==x)return mid;
		if(a[mid]<x)return bs(x, mid+1, r, a);
		return bs(x,l, mid-1, a);
	}
	return -1;
}



ll bs(ll x, ll l , ll r , vll &a){
	if(l<=r){
		ll mid = (l+r)/2;
		if(a[mid]==x)return mid;
		if(a[mid]>x)return bs(x,l, mid-1 , a);
		return bs(x,mid+1, r , a);
	}
	return -1;
}


ll bs(ll x, ll l , ll r , vll &a){
	if(l<= r){
		ll mid = (l+r)/2;
		if(a[mid]== x) return mid;
		else if(a[mid]>x){
			return bs(x, l, mid-1, a);
		}
		return bs(x, mid+1, r, a);

	}
	return -1;
}



ll bs (ll l , ll r, ll x, vll &a){
	if(l<=r){
		ll m = (l+r)/2;
		if(a[m]==x)return m;
		if(a[m]> x)return bs(l, m-1, x, a);
		return bs(m+1, r, x,a);
		/*el +1/-1 tiene la funcion de romper 
		la desigualdad l<=r en caso que no este en el array. 
		*/	
	}


	return -1;
}




int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	ll n; cin>>n;
	vll a(n);
	ll y;	
	for(auto &x: a) cin>>x;
	cin>>y;	
	sort(a.begin(), a.end());
	for(auto x: a) cout<<x<< ' ';
	cout<<endl;
	cout<<bs(0, n-1, y, a)<<endl;

	return 0;
}





ll bs2(ll l , ll r, ll x, vll &a, ){
	if(l<=r){
		ll m = (l+r)/2;
		if(a[m]==x)return m;
		if(a[m]> x)return bs(l, m-1, x, a);	
		return bs(m+1, r, x, a);
	}	
	return -1;
}













