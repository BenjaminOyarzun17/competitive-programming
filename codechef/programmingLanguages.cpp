#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> ne, v1, v2;
		for(int  i =  0; i< 2; i++){
			int g;
			cin>>g;
			ne.push_back(g);
		}	

		for(int  i =  0; i< 2; i++){
			int g;
			cin>>g;
			v1.push_back(g);
		}	

		for(int  i =  0; i< 2; i++){
			int g;
			cin>>g;
			v2.push_back(g);
		}	
		sort(ne.begin(), ne.end());

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		bool found1 = false;

		bool found2 = false;
		if(v1[0]==ne[0] && v1[1]==ne[1]){
			found1 = true;
		}

		if(v2[0]==ne[0] && v2[1]==ne[1]){
			found2 = true;
		}
		if(found1 || found2){
			if(found1){
				cout<<1<<endl;
			}else if(found2){
				cout<<2<<endl;
			}
		}else{
			cout<<0<<endl;
		}
	}


}
