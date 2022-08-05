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




//floyd warshall
//retorna una matriz que tiene la distancia mas corta de un nodo a otro. 
//la verdad es que basta con almenar el grafo dentro de la misma matriz
//complejidad muy mala, O(n^3)
vvll d(n, vll (n, INF));
for (int i = 1; i <= n; i++) {
	for (int j = 1; j <= n; j++) {
		if (i == j) d[i][j] = 0;
		else if (adj[i][j]) d[i][j] = adj[i][j];// usa matriz de adyacencia
		// tambien se puede adaptar para lista de adyacencia
	}
}
for (int k = 1; k <= n; k++) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			d[i][j] = min(d[i][j],d[i][k]+d[k][j]);//!!!
			// como que une los paths i ->k y k->j generando  i-> k-> j
		}
	}
}




//Bellman ford
//grafo almacenado como edge list. 
//edges es una lista que tiene tie de forma (a, b, weight)
vll distance(n, INF);
distance[x] = 0;//distancia a root.
for (int i = 1; i <= n-1; i++) {//se puede mostrar que hay que hace max n-1 iteraciones
	for (auto e : edges) {
		int a, b, w;
		tie(a, b, w) = e;
		distance[b] = min(distance[b], distance[a]+w);
	}
}

//algoritmo de prim para encontrar mst. ojo que usa priority queue.
vvpll  adj(n); //de forma: nodo, ( nodo , peso)
vector<bool> visited(n,false);  
vpll mst;// conexiones del mst final
vector<ll> value(n,INF); 
priority_queue<pll, vpll, greater<pll>>> que; 
void prims() {
    que.push({0,0});  //push the weight required to insert the source node =0 and the node itself(i.e 1)
	//la pq. tiene formato (weight, nodo) por conveniencia
    value[0]=0;    //minimum weight for source is 0  
    visited[0] = true;         
    while (!que.empty()) {      
        auto [cw, u]= que.top(); que.pop();                    
        for (auto [v, w] : adj[u]) {   
            if (!visited[v] && value[v] > w) {   //if the node is not visited and if its weight along this edge is less than the 
                value[v] = w;                         //previous edge associated with it, then we consider it
        	visited[v] = true;         
		mst.pb({u, v});
                que.push({value[v], v});   //FORMATO peso, nodo!!
            }
        }
    }
}



//algoritmo de kruskal para encontrar minimum spanning tree de un grafo. OJO: usa DSU
template<class T> T kruskal(int N, vector<pair<T,pi>> ed) {
	sort(ed.begin(), ed.end());
	vll init(N, -1);
	vector<pair<ll,pll>> edge;
	/*
		par de forma: peso, <nodo, nodo>. asi se tiene el vector de edges
	*/
	T ans = 0; DSU D; D(N); // edges that unite are in MST
	for (auto a: ed) if (D.join(a.second.first,a.second.second)) ans += a.first;
	return ans;

}




//topological sort usando dfs. solo funciona paragrafos sin ciclos 
int N; // Number of nodes
vector<int> graph[100000], top_sort; // Assume that this graph is a DAG
vector<bool> visted(100000, 0);
void dfs(int node) {
	for (int i : graph[node]) {
		if (!visited[i]) {
			visited[i] = true;
			dfs(i);
		}
	}
	top_sort.pb(node);//lo unico diferente
}
void compute() {
	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			dfs(i);//se ejecuta mientras queden nodos sin visitar
		}
	}
	reverse(begin(top_sort),end(top_sort));
	// The vector `top_sort` is now topologically sorted
}


// adj[u] = adjacent nodes of u
// ap = AP = articulation points
// p = parent
// disc[u] = discovery time of u
// low[u] = 'low' node of u
//version de codeforces
int dfsAP(int u, int p) {
  int children = 0;
  low[u] = disc[u] = ++Time;
  for (int& v : adj[u]) {
    if (v == p) continue; // we don't want to go back through the same path.
                          // if we go back is because we found another way back
    if (!disc[v]) { // if V has not been discovered before
      children++;
      dfsAP(v, u); // recursive DFS call
      if (disc[u] <= low[v]) // condition #1
        ap[u] = 1;
      low[u] = min(low[u], low[v]); // low[v] might be an ancestor of u
    } else // if v was already discovered means that we found an ancestor
      low[u] = min(low[u], disc[v]); // finds the ancestor with the least discovery time
  }
  return children;
}

void AP() {
  ap = low = disc = vector<int>(adj.size());
  Time = 0;
  for (int u = 0; u < adj.size(); u++)
    if (!disc[u])
      ap[u] = dfsAP(u, u) > 1; // condition #2
}
//articulation points cp-algorithms















void dijkstra(){

	int n, m ; cin>>n>>m;
	vector<vector<pair<ll, ll>>> adj(n);
	for(int i=0 ;i<n ; i++){
		ll u,v,w;cin>>u>>v>>w;
		u--; v--;
		adj[u].push_back({v,w});

		adj[v].push_back({v,w});
	}
	using state = pair<ll, ll>;
	
	priority_queue<state, vector<state>, greater<state>>pq;
	
	vector<ll> dist(n, INF);
	pq.push({0,0});
	dist[0]=0;	
	vector<ll> parent(n);
	while(!pq.empty()){
		auto [cweight,u] = pq.top();
		pq.pop();
		if(cweight!=dist[u])continue; 
		for(auto [v,w] : adj[u]){
			if(cweight+ w< dist[v]){
				dist[v] = cweight+w;
				pq.push({dist[v], v});
				parent[v]=u;
			}
		}	
	}
}



void BFS(ll first, ll n){
	vvll adj(n);
	queue<ll> q; 
	vector<bool> v(n);
	ll first = 0;
	q.push(first);
	while(!q.empty()){
		ll c = q.first();q.pop();
		for(auto x: adj[c]){
			if(!v[x]){
				q.push(x);
				v[x] = true;
			}
		}
	}



}

void DFS(vvll & adj, ll c, vector<bool> v ){
	for(auto x: adj[c]){
		if(!v[x]){
			DFS(adj, x, v);
			v[x] = true;
		}
	}
}







int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}
