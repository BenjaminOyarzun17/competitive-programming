#include<bits/stdc++.h>

using namespace std;
using ll = long long;


bool sortbysec(const pair<ll,ll> &a,
		const pair<ll,ll> &b)
{
	return (a.second > b.second);
}

void solve(){

	ll t ; 
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		map<ll, pair<ll, ll>> edi;
		vector<pair<ll,ll>> sor;
		for(ll i =1 ; i< n+1 ; i++){
			ll l ;
			cin>>l;
			edi[i]=make_pair(i, l);
			sor.push_back(make_pair(i, l));			

		}	
		sort(sor.begin(), sor.end(), sortbysec);
			
		

		deque<pair<ll, ll>>de;
		de.push_back(make_pair(0, 0));
		for(ll i =0 ;i< n ; i++){
			if(i%2==0){
				de.push_back(sor[i]);
			}else{
				de.push_front(sor[i]);
			}
		
		}
		
		ll counter = 0 ; 
		ll firstLocation;

		for(auto x: de){
			
			if (x.first==0){
				firstLocation=counter;
			}
			//cout<<x.first<<" ";
			counter ++;
		}
		//cout<<endl;
		
		ll time = 0;
		ll pos = 0 ; 
		for(auto x:de){
			time = time + 2*abs(firstLocation- pos)*x.second;
			pos++;
		}
		cout<<time<<endl;
		vector<ll>idx;
		for(ll i = 0 ; i<n+1; i++){
			idx.push_back(0);
		}
		ll j= 0;
		for(auto x:de){
			idx[x.first]=j;
			j++;
		}


		for(auto x: idx){
			cout<<x<<" ";
		}
		cout<<endl;
		//cout<<endl;


	

	}
}

int main(){

	
	solve();

	return 0 ; 
}
