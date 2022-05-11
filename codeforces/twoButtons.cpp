#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef vector<vl> vvl;


int main(){

	ll n, m;
	cin>>n>>m;
	if(n>= m){
		cout<<n-m<<endl;
	}else{
		
		vl v(2*m, -1);
		v[n] = 0;
		queue<ll> q;
		q.push(n);
		while(!q.empty()){
			ll x = q.front(); q.pop();
			if(x == m){
				cout<<v[x]<<endl;
				break;
			}else{
				if(2*x<=2*m && v[2*x]==-1){
					q.push(2*x);
					v[2*x] = v[x]+1;
				}
				if(x-1>=0 && v[x-1]==-1){
					q.push(x-1);
					v[x-1] = v[x]+1;
				}
			}
		}	



	}


	return 0;
}
