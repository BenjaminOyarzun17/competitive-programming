#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void BFS(vector<bool> &prohibited, vector<bool>&visited,int q, int k, int p, int n){
	visited[k]= true;
	queue<int> waiting;
	waiting.push(k);

	while(!waiting.empty()){
		
		int current = waiting.front();
		waiting.pop();
			
		vector<int> posibles = {
			current+1, current-1,
			current+n+1, current-n+1,	
			current+n-1, current-n-1,	
			current+n, current-n,	
		};
		for(auto x: posibles ){
			if(x>=0 &&  x<=n*n-1 && !visited[x] && !prohibited[x]){
	        		visited[x]= true;		
				waiting.push(x);
			}
		}
		
	}	


}



void solve(){
	int n;
	cin>>n;
	ll sq = n*n;
	vector<bool> prohibited(sq, false);
	vector<bool>visited (sq);
	ll qi, qj;
	ll ki,kj;
	ll pi, pj;
	ll q, k, p;
	cin>>qi>>qj;
	cin>>ki>>kj;
	cin>>pi>>pj;
	q= (qj-1)*n+qi-1;	
	k= (kj-1)*n+ki-1;	
	p= (pj-1)*n+pi-1;	

	for(int i = 0; i<=n; i++){
		prohibited[(q/n)*n+i]=true;
		//cout<<(q/n)*n+i<<' ';
	}
	//cout<<endl;
	for(int i = 0; i<n*n; i+=n){
		prohibited[q-(q/n)*n+i]=true;
		//cout<<q-(q/n)*n+i<<' ';
	}
	//cout<<endl;
	int d = q;
	while(d>=0){
		prohibited[d]=true;
		//cout<<d<<' ';
		d-=n+1;
	}
	d = q;	
	//cout<<endl;
	while(d<n*n){
		prohibited[d]=true;
		//cout<<d<<' ';
		d+=n+1;
	}
	//cout<<endl;
	d = q;	
	while(d<n*n){
		prohibited[d]=true;

		//cout<<d<<' ';
		d+=n-1;
		
	}
	//cout<<endl;
	d = q;
	while(d>0){
		prohibited[d]=true;
	//	cout<<d<<' ';
		d-=n-1;
	}
	//cout<<endl;
	BFS(prohibited, visited, q, k, p, n);
	for(auto x: visited) cout<<x<<' ' ;
	cout<<endl;

	for(auto x: prohibited) cout<<x<<' ' ;
	cout<<endl;
	cout<<p<<endl;
	if(visited[p]){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}


int main(){

	solve();
	return 0;



}
