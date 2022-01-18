#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll t;
	scanf("%lld", &t);
	while(t--){
		int n;
		scanf ("%d", &n);
		vector<int> parcial;
		vector<int> sol;
		for(int tau =0 ; tau< n ; tau ++){
			int g;
			cin>>g;
			parcial.push_back(g);
		}
		if(n ==1){
			printf("%d \n", parcial[0]);
		}else{
			int i, j;
			i = 0 ; 
			j = n-1;
			
			for(int k = 0 ; k< n; k++){
				if(k&1){
					sol.push_back(parcial[j]);
					j--;
				}else{
			        sol.push_back(parcial[i]);	
					i++;	
				}
			}
			
	        
			for(auto x: sol){
				cout<<x<<' ';
			}
			cout<<endl;
			}
		}

	
	}









int main(){
	
	solve();
	return 0;


}

