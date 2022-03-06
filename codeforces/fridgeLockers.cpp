#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		vector<ll> a(n);
		for(auto &x: a) cin>>x;
		if(m<=n-1 || (m==2 && n ==2)){
			cout<<-1<<endl;
		}else{

			ll s = 0;	
			for(auto x: a) s+= x;
			if (m == n) {
				cout<<s*2<<endl;
				for(int i = 1; i<n ;i++){
					cout<<i<<' '<<i+1<<endl;
		
				}
				cout<<n<<' '<<1<<endl;
			}else{
				s+=m-n;		
				cout<<s*2<<endl;	
				for(int i = 1; i<n ;i++){
					cout<<i<<' '<<i+1<<endl;
		
				}
				cout<<n<<' '<<1<<endl;
				vector<pair<ll, ll>>a2;
				for(int i = 0 ; i< n ; i++){
					a2.push_back(make_pair(a[i], i));
				}					
				sort(a2.begin(), a2.end());
				for(int j = 0 ; j< m-n; j++){
					cout<<a2[0].second<<' '<<a2[1].second<<endl;
				}
			}
		}

	}


}

int main(){
	solve();

	return 0;


}
