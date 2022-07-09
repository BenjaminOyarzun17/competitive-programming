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





/*
lower bound siempre es uno.
para cada cuadrado que tenga plantas puedo 
upperbound es n

para cada casilla con plantas puedo hacer bfs con movimientos: 
1,0; 0, -1 y 

yo creo que este problema tambien requiere usar dp. o sino usar O(sqrt)

subproblemas posibles: 
- numero de cuadrados de largo n en un rango particular (i, j)
--> si o si existen de larg uno
--> para ver si existen de largo dos tengo que ver dp[1][i+1][j]; dp[1][i][j-1]; dp[1][i+1][j-1]. si todos son verdaderos, entonces dp[2][i][j]= 1;
ahora, para dp[3]:
si dp[2][i][j] == 1; puedo ver dp[2][i+1, j]; dp[2][i+1, j-1]; dp[2][i, j-1].
si son todos  uno, dp[3][i][j] == 1
en general: si dp[n][i][j]==1; y dp[n][i+1][j]; dp[n][i+1][j-1]; dp[n][i][j-1] tambien, entonces podemos hacer decir que dp[n+1][i][j] = 1;
podemos iterar desde n =1 . si nos se cumple que hay un dp[n+1][i][j]==1, entonces la soluciones n.

*/




int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n; cin>>n;
	vvll g(n, vll (n, 0));
	vector<vector<bool>>v(n, vector<bool>(n,false)) ;
	ll sol = 0;
	vpll moves ={{1,0}, {0,1},{-1,0}, {0,-1}};
	for(int i = 0 ; i<n; i++){
		ll a, b;cin>>a>>b;
		for(int j = a; j<=b; j++){
			g[i][j]=1;
		}
	}

	for(auto x: g){
		for(auto y: x) cout<<y<< ' ' ;
		cout<<endl;
	}

	for(int i = 0 ;i< n; i++){
		for(int j = 0 ;j< n; j++){
			if(!v[i][j]){
				sol = max(bfs(v, g, moves, i, j, n), sol);
			}
		}
	}
	cout<<sol<<endl;

	return 0;
}


