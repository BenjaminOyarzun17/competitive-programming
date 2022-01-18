#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){
	string s;
	cin>>s;
	int M = 0;
	int actualCount = 1 ; 
	if(s.size()==1){
		cout<<1<<endl;
	}else{	
	for(int i = 0 ; i< s.size()-1; i++){
		if(s[i]==s[i+1]){
			actualCount++;
			M = max(M , actualCount);

			
		}else{
			
M = max(M , actualCount);
			actualCount = 1;

					}
				

	}
	
	printf("%d", M);
}
}





int main(){
	
	solve();
	return 0;


}

