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



vvll d(n, vll (n, INF));


for(int i = 0 ;i< n; i ++){
	for(int j = 0 ;j<n; j++){
		if(i==j)d[i][j]= 0;
		if(i!=j && matr[i][j]!=0)d[i][j] = matr[i][j];
	}
}

for(int k = 0 ; k < n;k++){
	for(int j = 0 ; j < n;j++){
		for(int i = 0 ; i < n;i++){
			d[i][j] = min(d[i][j], d[i][k]+ d[k][j]);
	}
}
vll d(n, vll (n,INF));

for(int i = 0 ; i< n; i++ ){
	for(int j = 0; j< n ; j++){
		if(i==j){
			d[i][j]= 0;//distancia a si mismo
		}else if(mtrx[i][j]!=0){
			d[i][j]= mtrx[i][j];
		}
	}
}


for(int k = 0 ; k <= n ; k++){
	for(int j = 0 ; j <= n ; j++){
		for(int i = 0 ; i <= n ; i++){
			d[i][j]= min(d[i][k]+d[k][j], d[i][j]);
		}
	}
}






int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	return 0;
}


