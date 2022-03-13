#include<bits/stdc++.h>

using namespace std;


void factors(int n, vector<int> &fact, vector<int> &sieve){
	for(auto x: sieve){
		if(n%x==0){
			fact.push_back(x);
		}
		if(x> (int)sqrt(n)){
			break;
		}
	}

}




void solve(){

	int t;
	cin>>t;
	vector<int> sieve;
	vector<bool> marked(10000, false);
	marked[0]=true;//1 marcado
	for(int i = 2; i<= 10000; i++){
		if(!marked[i-1]){
			sieve.push_back(i);
			for(int j = i; j<=10000; j++){
				if(j%i==0){
					marked[j-1]=true;
				}
			}
		}
	}	
	while(t--){
		int n;
		cin>>n;
		bool o=false, e = false;
		vector<int > a;
	
		for(int i = 0 ; i< n ; i++){
			int g;
			cin>>g;
			if(g&1){
				o = true;
			}else{
				e = true;	
			}
			a.push_back(g);
		}
		if(o && e){
			cout<<"YES"<<endl;
		}else{
			bool found = false;	
			for( int i =0 ; i< n-1 ; i++){
				for(int j = i+1; j< n ; j++){
					vector<int> f;
					vector<int> s;
					factors(a[i], f, sieve);	
					factors(a[j], s, sieve);	
					if(f.size()!=s.size()){
						found = true;
						break;	
					}else{
						for(int k = 0 ; k< f.size(); k++){
							if(f[k]!=s[k]){
								found = true;
								break;
							}		
						}
					}	
				}
			}

			if (found){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}


		}
	}

}


int main(){
	solve();
	return 0;


}
