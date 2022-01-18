#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){


	ll t;
	scanf("%lld", &t);
	while(t--){
	  int n;
	  scanf("%d", &n);
	  if(n ==1 ){
  		printf("%s\n", "YES");
		vector<int> original(n);
		for(auto &x:original)cin>>x;


	}else{
		vector<int> original(n);
		set<int> posibles;
		for(auto &x:original)cin>>x;
		for(auto x: original)posibles.insert(x);
		if(posibles.size() ==1){
			printf("%s\n", "YES");
		}else{
			bool win= false;
			for(auto seleccionado: posibles){
				if(win == true)break;

				bool localLoss = false;
				int i, j;
				if(n&1){
					i = n/2;
					j = n/2;
				}else{
					i =( n/2) -1;
					j = n/2;
					
				}

				for(int k = 0 ; k < n ; k++){
					if(original[i]==original[j] && i>=0 && j<= n-1){
						if(i>0)i--;
						if(j<n-1)j++;
						//cout<<"trigger 1"<<endl;
						continue;
					}else if(original[i]==seleccionado && i>0){
						i--;
						//cout<<"trigger 2"<<endl;
						continue;
					}else if(original[j]==seleccionado && j<n){
						j++;	
						//cout<<"trigger 3"<<endl;
						continue;
					}else if(original[i]!=original[j] ){
						//cout<<"trigger 4"<<endl;
						localLoss = true;
						break;	
					}
					
				}
				if(localLoss==false || (int)posibles.size()==2)win = true;	


			
			}
			if(win){
				cout<<"YES"<<'\n';
			}else{
				cout<<"NO"<<'\n';
			}
						

		}
		
	}
	
	}



}





int main(){
	
	solve();
	return 0;


}

