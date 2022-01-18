#include<bits/stdc++.h>
using namespace std;



void solve(){
	int t;
	scanf("%d", &t);
	while(t--){
		string s;
		string le, ri;
		cin>>s;
                int l = s.size();
		if(l&1){
			printf("%s", "NO\n");
		}else{
			le = s.substr(0, l/2);
			ri = s.substr(l/2, (l/2));
			(le==ri)?printf("%s", "YES\n"):printf("%s", "NO\n");
		}

	
	
	
	}


}





int main(){
       	solve();
       	return 0;
}

