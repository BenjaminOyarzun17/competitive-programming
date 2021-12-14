#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){

	int n;
	cin>>n;
	vector<int>balances;
	vector<int> Max_Subsequence;
	bool hayPos =false;
	for(int i = 0 ; i < n ; i++){
		int c, p, k , v;
		cin>>c>>p>>k>>v;
		int balance = k*v- c*p;
		balances.push_back(k*v- c*p);
		if(balance>0)hayPos = true;
	}
	if(hayPos==false){
		cout<<"IMPOSIBLE"<<'\n';
	}else{
		int mBal=0;
		vector<vector<int>>positivos;
		for(int i = 0 ; i < n ; i ++){
			for(int j = i; j< n ; j++){
				int suma = 0 ;
				for(int k = i ; k <= j ; k++){//no estoy seguro de este <=
					suma+= balances[k];
				}
				//cout<<suma<<endl;
				if(suma>0){
					mBal= max(mBal, suma);
					positivos.push_back({i, j, suma, (j+1)-(i+1)});
				}
			}
		}
		if(positivos.size()!= 0){
			int countMax =0;

			for(auto x: positivos){
				if(x[2]==mBal){
					countMax++;
					//cout<<x[0]+1<<' '<<(x[1]+1)-(x[0]+1)<<' '<<mBal<<'\n';
				}

			}
			if(countMax == 1){
				for(auto x: positivos){
					if(x[2]==mBal){
						//countMax++;
						cout<<x[0]+1<<' '<<x[1]+1<<' '<<mBal<<'\n';
						break;
					}
				}

			}else{
				int maxLen = 0 ;
				for(auto x: positivos){
					if(x[2]==mBal){
						if(x[3]>maxLen){
							maxLen = x[3];
						}
					}
				}
				for(auto x:positivos){
					if(x[3]==maxLen){
						cout<<x[0]+1<<' '<<x[1]+1<<' '<<mBal<<'\n';
						break;

					}
				}




				}
			}else{
			cout<<"IMPOSIBLE"<<'\n';
		}




	}



}


int main(){

	
	solve();

	return 0 ; 
}