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

bool check(ll i , ll j, ll n){
	if(i+1<n && i+1>=0 && i<n && i>=0 && j-1<n && j-1>=0 && j<n && j>=0)return true;
	return false;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n; cin>>n;

	vector<vector<vector<ll>>> dp(n+1, vll(n+1, vll (n+1, 0)));
	ll sol = 0;
	bool o= false;
	for(int i = 0 ; i<n; i++){
		ll a, b;cin>>a>>b;
		for(int j = a; j<=b; j++){
			dp[1][i][j]=1;
			o = true;
		}
	}
	if(!o){
		cout<<0<<endl;
	}else{
		sol =1;

		bool broken = false;

		while(!broken){
		bool next= false;
		for(int i = 0 ; i< n; i++){
			for(int j = 0 ;j< n;j++){
				if(check(i, j, n) && dp[sol][i][j]){
					if(dp[sol][i+1][j] && dp[sol][i][j-1] &&dp[sol][i+1][j-1] ) 
						dp[sol+1][i][j]=1;
						next= true;
				}
			}
		}
		if(!next){
			broken = false;
		}else sol++;
		}
		cout<<sol<<endl;


	}
	cout<<sol<<endl;

	return 0;
}


