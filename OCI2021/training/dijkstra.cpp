#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll INF = 1e18; // mayor a n*w_maximo = 10^11

int main(){
	// Resuelve el problema https://codeforces.com/contest/20/problem/C
	int n, m; cin >> n >> m;

	vector <vector <pair<int,ll>>> adj(n); // indices 0...n-1
	for(int i=0; i<m; i++){
		int u, v;
		ll w;
		cin >> u >> v >> w;
		u--;
		v--;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}

	// cola de prioridad: (heap)
	// 2 operaciones: extraer el menor log(n)
	//                insertar log(n)
	using state = pair<ll,int>;
	priority_queue <state, vector<state>, greater<state>> pq;
	vector <ll> dist(n, INF);

	pq.push({0,0});
	dist[0] = 0;

	vector <int> anterior(n, -1);

	while(!pq.empty()){
		auto [peso_camino, u] = pq.top(); // C++17
		pq.pop();

		if(peso_camino != dist[u]) continue;

		for(auto [v, w] : adj[u]){ // [v,w] solo sirve en C++17
			// para cada vecino v de u con peso w
			if(peso_camino + w < dist[v]){
				dist[v] = peso_camino+w;
				pq.push({dist[v], v});
				anterior[v] = u; // guardamos el nodo anterior, es necesario si queremos recuperar el camino
			}
		}
	}

	if(dist[n-1] == INF){
		cout << "-1\n";
		return 0;
	}
	else{
		vector <int> camino;

		for(int u = n-1; u != -1; u = anterior[u]){
			camino.push_back(u);
		}
		for(int i=camino.size()-1; i>=0; i--){
			cout << camino[i]+1 << ' ';
		}
		cout << '\n';
	}
	return 0;
}

