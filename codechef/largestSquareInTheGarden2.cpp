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


optimizaciones posibles: 
en vez de iterar para todo i, j, puedo iterar por sobre todo par que tiene un verde.
--> 



*/
bool check(ll x, ll y, ll n){
	if(x<n && y<n)return true;
	return false;

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n; cin>>n;
	vvll g(n, vll (n, 0));
	ll sol = 0;
	bool o= false;
	vpll ac ;
	for(int i = 0 ; i<n; i++){
		ll a, b;cin>>a>>b;
		for(int j = a; j<=b; j++){
			g[i][j]=1;
			ac.pb({i, j});
			o = true;
		}
	}
	if(!o){
		cout<<0<<endl;
	}else{
		vpll moves={{1, 0},{1, 1},{0, 1}};
		for(auto p: ac){
			map<ll, ll>cn; 	
			vvll d(n, vll (n, -1));
			d[p.first][p.second]= 1;
			cn[1]= 1;	
			queue<pair<ll, pll>> q;// level, {i,j}
			q.push({1, p});
			ll level = 1;
			while(!q.empty()){
				pair<ll, pll>pi =  q.front(); q.pop();
				ll x=pi.second.first; 
				ll y=pi.second.second; 
				for(auto [dx, dy]: moves){
					ll nx = x+dx;
					ll ny = y+dy;
					if(check(nx, ny, n)){
						if(g[nx][ny] && d[nx][ny]==-1){

							q.push({pi.first+1, {nx, ny}});
							d[nx][ny] = d[x][y]+1;
							if(cn[pi.first+1]==0){
								cn[pi.first+1]+= (ll)pow(pi.first, 2)+ 1;
							}else cn[pi.first+1] ++;
							level = pi.first+1;
						}else if(g[nx][ny]==0){
							queue<pair<ll, pll>> e;	
							swap(q, e);
						}
					}
				}
			
			}
			if(cn[level]==(ll)pow(level, 2)){
				sol = max(level, sol);
			}else{
				for(ll i=1 ; i< level; i++){
					if(cn[i]<pow(i, 2)){
						sol = max(i-1, sol);
						break;
					}
				}
			}
			if(sol == n)break;
			
		}
		cout<<sol<<endl;



	}



	return 0;
}



