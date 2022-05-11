#include<bits/stdc++.h>
typedef long long ll;
using namespace std;






/*

	ejecutar BFS hasta que todos esten igualados. 
	para cada ciudadano, observar sus vecinos y determinar el mayor ESTRICTO. 
	actualizar su valor. 

	seguir con el siguiente vecino. 
	cuando se llega al ultimo vecino, reiniciar.
	

	NUEVA ESTRATEGIA MAS OPTIMA:
	- en vez de fuerza bruta, hacer greedy:
		- si todos son iguales, al toque tirar cero. 
		- me paro en un ciudadano y exploro a sus vecinos por capas
		- ejecuto BFS:
			- si todos sus vecinos son diferentes, sigo a la siguiente capa y hago sol = max(sol, capaActual)
			- asi hasta que se encuentre uno diferente


	1 1 1 1 
        1 1 1 1
        1 1 1 1
	1 1 1 2


	1 1 1 1 
        1 1 1 1
        1 1 2 2
	1 1 2 2


	1 1 1 1 
        1 2 2 2
        1 2 2 2
	1 2 2 2


	2 2 2 2
        2 2 2 2
        2 2 2 2
	2 2 2 2
*/

bool checkParam(ll nx,ll ny  , ll m , ll n){
	if(nx>=0 && nx<m  && ny>=0 && ny <n){
		return true;	
	}else return false;
}




int main(){
	int t;cin>>t;
	while(t--){
		ll n, m; cin>>m>>n;	
		vector<vector<int>> wealths(m);
		set<ll> diferences;
		ll M = 0 ;
		for(int i = 0 ; i< m ; i++){
			for(int j = 0 ; j < n ; j++){
				ll g;cin>>g;
				M = max(M, g);
				wealths[i].push_back(g);
				diferences.insert(g);
			}
		}
		vector<pair<ll, ll>> moves = {
			{1,0},
			{0,1},
			{1,1},
			{-1,0},
			{0,-1},
			{-1,-1},
			{-1,1},
			{1,-1}
		}		;
		ll reached = 0;
		for(auto x: wealths) for(auto y: x) if(y==M)reached++;
		//vector<vector<bool>>levelled (m, vector<bool> (n, false));	
		if(reached== m*n)cout<<0<<endl;
		else{
			
			ll solution = diferences.size()-1;

			for(int i = 0 ; i< m ; i++){
				for(int j = 0 ; j< n; j++){
					pair<ll, ll> initial = {i, j};
					ll original = wealths[i][j];
					bool differentFound = false;
					queue<pair<ll, ll>> q;
					q.push(initial);
					vector<vector<ll>> visited(m, vector<ll> (n, 0));
					visited[i][j]= 0;
					while(!q.empty() || !differentFound){
						
						auto current = q.front();
						q.pop();
						for(auto x: moves){
							int nx = current.first+ x.first;
							int ny = current.second + x.second;
							if(checkParam(nx, ny, m , n)){
								if(visited[nx][ny]==0 ){
									if(wealths[nx][ny]!= original && differentFound == false){
										differentFound = true;
									}else{ 
										q.push({nx,ny});
										visited[nx][ny] = visited[current.first][current.second]+1;
									}
								}	
							}
						}
						if(differentFound){
							solution = max(solution, visited[current.first][current.second]+1);
							break;
						}
					}
					//solution = max(solution, count);
				}
			}
			cout<<solution<<'\n';
		}
			
	





	}

		




	return 0;
}
