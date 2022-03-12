#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll n = s.length();
		ll count = 0 , ans = 0;
		for(int i = 1; i< n-1; i ++){
			if(s[i]!=s[0] && s[i]!=s[n-1]) count ++;
			else count = 0;
			ans = max(count, ans);
		
		}
		if(ans == 0) cout<<-1<<endl;
		else cout<<ans<<endl;
	}


}
