#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	int n, m;
	cin>>n>>m;
	vector<int> fila;
	for(int i = 0 ; i< m ; i++){
		int l;
		cin>>l;
		fila.push_back(l);
	}
	int maxDist = 0; 
	vector<int>soluciones;
	for(int i = 0 ; i< m; i++){

		for(int j = i+1 ; j < m ; j++){
			vector<int>cumple;
			cumple.push_back(fila[i]);
			for(int k = i+1; k<=j; k++){
				if(cumple[cumple.size()-1]> fila[k]){
					cumple.push_back(fila[k]);
				}
			}

			if(cumple.size()>1){
				soluciones.push_back(cumple[0]-cumple[cumple.size()-1]);
			}

		}

	}
	if(soluciones.size()==0){
		cout<<-1<<endl;
	}else{
	for(auto x: soluciones){
		
		maxDist = max(maxDist, x);
	}

	cout<<maxDist<<endl;
}


}


int main(){

	
	solve();

	return 0 ; 
}