#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){

	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		vector<string> s;
		
		string sol = "";
		for(int i = 0; i< n-2; i++){
			string dum;
			cin>>dum;
			s.push_back(dum);
		
		}


		if(s.size()==1){
			sol = s[0];
		}else{
			for(int i = 0 ; i< n-3 ; i++){
				if(i==0){
					sol.push_back(s[i][0]);
					sol.push_back(s[i][1]);
					
				}
				 if(s[i][1]==s[i+1][0]){
					sol.push_back(s[i+1][1]);
					//cout<<s[i+1][1]<<endl;
				}
				 if(s[i][1] != s[i+1][0]){
					sol.push_back(s[i+1][0]);
					sol.push_back(s[i+1][1]);			
				}
					
			}
		
		}	
		if((int)sol.size()== n-1){
			sol.push_back('a');
		}
		cout<<sol<<endl;
			
	}

}




int main(){
	solve();

	return 0 ;


}



