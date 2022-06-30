#include<bits/stdc++.h>
using namespace std;
#define	pb push_back
typedef long long ll;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;




ll INF = 1e18;
ll mod = 1e9+7;

struct P{
	ll i;
	ll c1; 
	ll c2; 
	ll c3;
};

struct c1greater{
	bool operator()(P a, P b)const { return a.c1>b.c1;
	}
};

struct c2greater{
	bool operator()(P a, P b)const { return a.c2>b.c2;
	}
};
struct c3greater{
	bool operator()(P a, P b)const { return a.c3>b.c3;
	}
};


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);


	ll n ;
	cin>>n;

	vector<P> c1;
	vector<P> c2;
	vector<P> c3;
	for(ll i = 1 ; i<= n; i++){
		ll a, b, c; 		
		cin>>a>>b>>c;
		P p ;
		p.i = i;
		p.c1= a;
		p.c2= b;
		p.c3= c;
		c1.pb(p);
		c2.pb(p);
		c3.pb(p);
	}	
	sort(c1.begin(), c1.end(), c1greater());
	sort(c2.begin(), c2.end(), c2greater());
	sort(c3.begin(), c3.end(), c3greater());
	

	vll solutions;



	for(auto x: c1){
		ll sol = 0;
		P p1 =x;
		sol+= p1.c1;
		P p2, p3;
		bool locFound = false;
		for(auto y: c2){
			p2 = y;
			if(p1.i!=p2.i && p2.c1<p1.c1 && p1.c2< p2.c2 ){
				sol+= p2.c2;

				for(auto z: c3){
					p3 = z;
					if(p1.i	!= p3.i && p2.i!=p3.i && p1.c1> p3.c1 && p2.c2> p3.c2 && p3.c3> p1.c3 && p3.c3>p2.c3 ){
						sol+= p3.c3;
						locFound = true;
						break;	
					}
				}
				if(locFound){
					break;

				}else{
					sol-= p2.c2;
				}
			}

		}	
		if(locFound){
			solutions.pb(sol);	
		}

	}


	
	if(solutions.empty()){
		cout<<-1<<endl;
	}else{
		vll ::iterator M= max_element(solutions.begin(), solutions.end());
	
		cout<<*M<<endl;
	}







	return 0;
}


