#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
struct pt{
	ll x, y;
};



int main(){
	ll nr, nc; cin>>nr>>nc;
	//columnas son OY
	vector<pt>ones;
	vector<ll> col(nc, 0);
	vector<ll> row(nr, 0);
	vector<bool> vcol(nc, false);
	vector<bool> vrow(nr, false);
	for(int i = 0 ; i< nr ; i++){
		for(int j = 0 ; j< nc; j++){
			ll a;cin>>a;
			pt cu ={i,j};
			if(a)ones.push_back(cu);
		}
	}
	
	for(auto p: ones){
		bool yas= false;

		bool xas= false;
		if(col[p.y]==0 && !vcol[p.y]){
			col[p.y]+= nr-1;//sumo numero de columnas
			vcol[p.y]= true;
			yas = true;
		}	
		if(row[p.x]==0 && !vrow[p.x]){
			row[p.x]+= nc-1;//sumo numero de filas
			vrow[p.x]= true;
			xas =true;
		}	

		if(row[p.x]>=1 && !xas){
			row[p.x]--;
		}	
		if(col[p.y]>=1 && !yas){
			col[p.y]--;
		}	
	}
	ll sol = 0 ;
	for(auto x: col) sol+= x;
	for(auto x: row) sol += x;
	cout<<sol<<endl;


	return 0;
}
