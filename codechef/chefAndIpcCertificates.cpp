#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
		ll n, m, k;
		cin>>n>>m>>k;
		ll elegible = 0;
		for(int i = 0 ; i< n; i++){
			ll count = 0;
			for(int j = 0 ; j< k ; j++){
				ll g;
				cin>>g;
				count +=g;
			}
			ll q;
			cin>>q;
			if(count>=m && q<=10){
				elegible ++;	
			}
		}		

		cout<<elegible<<endl;



	return 0;

}
