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

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n; cin>>n;
	vpll c;
	unordered_map<ll, ll> tout;
	unordered_map<ll, ll> tin;
	ll mtime = INF;
	ll Mtime = -1;
	ll count = 0;
	set<ll> times;
	for(int i = 0 ; i<n ; i++){
		ll a, b;	cin>>a>>b;
		c.pb({a,b});
		tout[b]++;
		tin[a]++;
		mtime = min(mtime, min(a,b));
		Mtime = max(Mtime, max(a,b));
		times.insert(a);
		times.insert(b);
	}


	ll sol = -1;
	for(auto x: times){
		count= count+tin[x]-tout[x];
		sol =max(sol, count);
	}
	cout<<sol<<endl;


	return 0;
}


