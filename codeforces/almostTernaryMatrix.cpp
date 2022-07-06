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

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll t;cin>>t;
	
	while(t--){
		ll n, m;
		cin>>n>>m;
		vvll dmatrix(n/2, vll (m/2));
		vvll sol(n, vll (m));
		for(int i = 0;  i< n/2; i++){
			for(int j = 0 ; j< m/2; j++){
				if(i&1)	{
					if(j&1){
						dmatrix[i][j]=1;
					}else {
	
						dmatrix[i][j]=0;
					}
				}else{
				
					if(j&1){
						dmatrix[i][j]=0;
					}else {
						dmatrix[i][j]=1;
					}
				}
			}
		}
		for(int i = 0 ; i< n/2; i++){
			for(int j = 0 ; j< m/2 ; j++){
				
				if(i&1)	{
					if(j&1){
						sol[2*i][2*j]= 0;
						sol[2*i+1][2*j]= 1;
						sol[2*i][2*j+1]= 1;
						sol[2*i+1][2*j+1]= 0;
					}else {
	
						sol[2*i][2*j]= 1;
						sol[2*i+1][2*j]= 0;
						sol[2*i][2*j+1]= 0;
						sol[2*i+1][2*j+1]= 1;
					}
				}else{
				
					if(j&1){

						sol[2*i][2*j]= 1;
						sol[2*i+1][2*j]= 0;
						sol[2*i][2*j+1]= 0;
						sol[2*i+1][2*j+1]= 1;
					}else {
	
						sol[2*i][2*j]= 0;
						sol[2*i+1][2*j]= 1;
						sol[2*i][2*j+1]= 1;
						sol[2*i+1][2*j+1]= 0;
					}
				}
			}
		}
		for(auto x: sol){
			for(auto y: x)cout<<y<<' ';
			cout<<'\n';
		}


	}


	return 0;
}


