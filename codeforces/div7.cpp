#include<bits/stdc++.h>

using namespace std;

void solve(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%7==0){
			cout<<n<<endl;
		}else{
			int sup = 10*(int)(n/10 +1)-1;
			
			int inf = 10*(int)(n/10)+1;
			int c = 7;
			while(c< inf){
				c+=7;
			}
			cout<<c<<endl;
		}
	}



}



int main(){
	solve();
	return 0;


}
