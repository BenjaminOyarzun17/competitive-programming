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

void pref(){
	ll fr, tr, fc, tc;
	vvll ps(N+1, vll (N+1);
	//fr = from row, tr= to row, fc = from column , tc = to col.
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			ps[i][j] = grid[i][j]+ ps[i - 1][j]+ ps[i][j - 1]- ps[i - 1][j - 1];
		}
	}
	for (int q = 0; q < Q; q++) {
		cin>>fr>>tr>>fc>>tc;	
		cout << ps[tr][tc]- ps[fr - 1][tc]- ps[tr][fc - 1]+ ps[fr - 1][fc - 1] << '\n';
	}
}



int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}



