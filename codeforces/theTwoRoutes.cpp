#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



int main(){

	ll n , m;cin>>n>>m;
	vvll r(n);
	vvll a(n);
	for(int i = 0 ;i< m ; i++){
		ll u, v;cin>>u>>v;
		u--; v--;
		r[v].push_back(u);	
		r[u].push_back(v);	
	}		
	for(int i = 0 ; i< n-1 ; i++){
		for(int j = i ; j< n ; j++){
			if(find(r[i].begin(), r[i].end(), j)==r[i].end()){
				a[i].push_back(j);
				a[j].push_back(i);
			}
		}
	}
	vll av(n, -1);
	vll tv(n, -1);
	bool ar=false;
	bool tr = false;	
	queue<ll>qa;
	queue<ll>qt;
	qa.push(0);

	qt.push(0);
	ll md = 0;
	ll ob = n-1;
	av[0]=0;

	tv[0]=0;
	while(!qt.empty() || !qa.empty()){
		ll ca, ct;
		ca = qt.front();ct = qt.front();
		if(ca == ct && ca!= ob && ca!=0){
			qt.pop();
		}else if(ca == ob){
			qa.pop();
			ar=true;
		}else if(ct == ob){
			qt.pop();
			tr = true;
		}else{
			qt.pop();qa.pop();
		}
		for(auto x:a[ca]){
			if(av[x]==-1 && !ar){
				qa.push(x);
				av[x]=av[ca]+1;
				md = max(md, av[x]);
			}
		} 
		for(auto x:r[ct]){
			if(tv[x]==-1 && !tr){
				qt.push(x);
				tv[x]=tv[ct]+1;
				md = max(md, tv[x]);
			}
		} 
	}
	for(auto x : tv) cout<<x<<endl;
	
	for(auto x : av) cout<<x<<endl;
	if(ar && tr){
		cout<<md<<endl;
	}else{cout<<-1<<endl;} 





	return 0;



}
