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
		int maxNum = 0;
		int poslen = 0;
		vector<vector<int>>positivos;
		vector<vector<int>>nuevosPositivos;
		for(int i = 0 ; i< (int)balances.size(); i++){
			if(balances[i]>0){
				positivos.push_back({i, i,0, balances[i]});
				mBal = max(mBal, balances[i]);
				poslen++;
			}
		}

		//for (auto x: positivos)nuevosPositivos.push_back(x);
		for(int i = 0  ; i< (int)positivos.size()-1; i++){
			for(int j = i+1; j< positivos.size(); j++){
				int suma = 0;
				for(int k = (int)positivos[i][0]; k<= positivos[j][0]; k++){
					suma+= balances[k];
				}
				//cout<<suma<<endl;
				if(suma> mBal){
					mBal = suma;
					nuevosPositivos.push_back({positivos[i][0],positivos[j][1], (positivos[j][1]+1)-(positivos[i][0]+1), suma });
				}
			}
		}

		if(nuevosPositivos.size() == 0){
			for(auto x: positivos){
				if(x[3]==mBal){
					cout<<x[0]+1<<' '<<x[1]+1<<' '<<x[3];
				}
			}
		}else{
			for(auto x: nuevosPositivos){
				if(x[3]==mBal){
					maxNum++;
				}
			}
			if(maxNum==1){
				for(auto x: nuevosPositivos){
					if(x[3]==mBal){
						cout<<x[0]+1<<' '<<x[1]+1<<' '<<x[3]<<endl;
						break;
					}
				}
			}else{
				


				int maxlen = 0;
				for(auto x: nuevosPositivos){
					if(x[3]==mBal){
						if(x[2]>maxlen){
							maxlen = x[2];
						}
					}
				}
				for(auto x: nuevosPositivos){
					if(x[2]==maxlen){
						cout<<x[0]+1<<' '<<x[1]+1<<' '<<x[3]<<endl;
						break;
					}
				}

			}

		}

		




	}



}


int main(){

	
	solve();

	return 0 ; 
}