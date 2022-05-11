#include<bits/stdc++.h>
using namespace std;

bool bfs();
bool checkMissing();


int main(){
	int m, n;
	cin>>m>>n;
	vector<vector<pair<int, char>>> adj(m*n);
	vector<vector<bool>> visited(m*n, vector<bool> (n, false));
	for(int i = 0 ; i< m ; i++){
		for(int j = 0 ; j < n ; j++){
			char image;cin>>image;
			if(j==0){
				if(i ==0){
					adj[
				}
				if(i == m-1){

				}
			}
			if(j == n-1){

				if(i ==0){

				}
				if(i == m-1){

				}

			}
		}
	}


	return 0;
}
