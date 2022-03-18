
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> sizes;
		for(int i = 0; i< n ; i++){
			int g;
			cin>>g;
			sizes.push_back(g);
		}
		ll possible = n;
		
		for(int i = n; i>=1; i--){
			ll localCount = 0;
			for(auto x: sizes){
				if(x>=possible){
					localCount ++;
				}
			}
	//		cout<<"c:"<<localCount<<endl;
			if(localCount>=possible){
				break;
			}
			//cout<<"c:"<<localCount<<endl;
			possible--;
		}
		cout<<possible<<endl;
	}



}

