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

struct SegmentTree{
	ll N;
	vector <ll> tree;
	SegmentTree(vector <ll> A){
		N = A.size();
		tree.resize(4*N);
		build(0, 0, N-1, A);
	}
	
	void build(ll n, ll i, ll j, vector <ll> &A){
		if(i == j){
			tree[n] = A[i];
			return;
		}
		ll mid = (i+j)/2;
		build(2*n+1, i, mid, A);
		build(2*n+2, mid+1, j, A);
		tree[n] = tree[2*n+1] + tree[2*n+2];
	}

	ll query(ll l, ll r){
		return query(0, 0, N-1, l, r);
	}

	ll query(ll n, ll i, ll j, ll l, ll r){
		if(l <= i && j <= r){
			return tree[n];
		}
		else if(j < l || r < i){
			return 0; 
		}
		ll mid = (i+j)/2;
		return query(2*n+1, i, mid, l, r)
			+ query(2*n+2, mid+1, j, l, r);
	}

	void update(ll t, ll val){
		update(0, 0, N-1, t, val);
	}
	void update(ll n, ll i, ll j, ll t, ll val){
		if(t < i || j < t) return; 
		if(i == j){ 
			tree[n] = val;
			return;
		}
		ll mid = (i+j)/2;
		update(2*n+1, i, mid, t, val);
		update(2*n+2, mid+1, j, t, val);
		tree[n] = tree[2*n+1]+tree[2*n+2];
	}
};
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);


	
	ll n, q;
	cin>>n>>q;
	
	vll a(n); 
	vll b(n);
	ll sb=0;
	for(auto &x: a) cin>>x;
	for(auto &x: b){
		cin>>x;
		sb+=x;
	}
	SegmentTree st(a);
	if(q==0){
		if(st.query(0, n-1)==sb){
			cout<<"NO"<<endl;
		}else cout<<"YES"<<endl;
	}else{
		
			cout<<"NO"<<endl;
	}
	

	return 0;
}



