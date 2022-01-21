#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


void solve(){

	ll n, m ,k;
	ll count = 0 ; 
	cin>>n>>m>>k;
	vector<ll>clients(n);
	for(auto &x: clients)cin>>x;
	sort(clients.begin(), clients.end());
	vector<ll> sizes(m);
	for( auto &x:sizes)cin>>x;
	sort(sizes.begin(), sizes.end());	
        queue<ll> clist;
	for(auto x: clients) clist.push(x);
	queue<ll> alist;
	for(auto x: sizes) alist.push(x);
        

    while(clist.size()>0 || alist.size()>0){
        if(clist.size()==0 || alist.size()==0){
        	break;
        }

		if(clist.front()<= alist.front()+k && clist.front() >= alist.front()-k){
			count++;
			clist.pop();
			alist.pop();
		}else if(clist.front()> alist.front()+k){
			alist.pop();
		
		}else{
			clist.pop();
		}

	}	 	

	cout<<count<<'\n';
}





int main(){
	
	solve();
	return 0;


}

