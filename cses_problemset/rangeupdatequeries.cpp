#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


template <class T>
struct SegmentTree{
	int N;
	vector<T> da;
	SegmentTree(vector <T> &A){
		N = A.size();
		da.resize(N+1);
		build(A);
	}
	void build(vector <T> &A){
		for(ll i = 0 ; i< A.size() ; i++){
			if(i == 0 ){
				da[0]= A[0];
			}else{
				da[i]= A[i] - A[i-1];
			}
		}
	}

	T query(ll n){
		T s = 0 ; 
		for(int i = 0 ; i<=n ; i++){
			s+= da[i];
		}

		return s;
	}



	void update(ll l, ll r, T val){
		da[l]+= val;
		da[r+1]-= val;
	}
	
};

int main(){
	ll n, q; cin>>n>>q;
		
	vector<ll> vals;
	for(ll i = 0 ; i< n ; i++){
		ll a;
		cin>>a;
		vals.push_back(a);
	}	
	SegmentTree<ll> st(vals);
	while(q--){
		ll type; cin>>type;
		if(type==1){
			ll l,r,u ;cin>>l>>r>>u; l--; r--;
			st.update(l,r,u);
		}else{
			ll k;cin>>k;
			k--;
			ll res = st.query(k);
			cout<<res<<endl;
		}
	}	


	return 0;
}

