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


struct edge{
ll x, y, w;
}
vector<edge> edges;
vll d(n, INF);
d[x] = 0;
for(int i = 0 ; i<n ;i++) {
	for(auto e: edges){
		d[e.y]= min(d[e.y], d[e.x]+ e.w);
	}
}



struct edge{
	ll a, b, x;
};
vector<edge> edges;
vll d(n, INF);
for(int i = 0 ; i< n-1 ; i++){
	for(auto e: edges){
		d[e.b] = min(d[e.b], d[e.a]+ d.w);
	}
}











struct edge{
	ll a, b, w;
}
vector<edge> edges;
vll d(n, INF);//vector con las distancias minimas a los nodos.
d[start] = 0;

for(int i = 1; i<= n-1; i++){
	for(auto e: edges){
		d[e.b]= min(d[e.b], d[e.a]+e.w);
	}

}





int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}


