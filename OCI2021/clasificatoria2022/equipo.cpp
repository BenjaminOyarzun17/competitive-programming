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
	bool operator()(P a, P b)const { return a.c1<b.c1;
	}
};

struct c2greater{
	bool operator()(P a, P b)const { return a.c2<b.c2;
	}
};
struct c3greater{
	bool operator()(P a, P b)const { return a.c3<b.c3;
	}
};


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);


	ll n ;
	cin>>n;
	priority_queue<P, vector<P>, c1greater> pqc1;
	priority_queue<P, vector<P>, c2greater> pqc2;
	priority_queue<P, vector<P>, c3greater> pqc3;
	set<ll> s1;
	set<ll> s2;
	set<ll> s3;


	for(ll i = 1 ; i<= n; i++){
		ll a, b, c; 		
		cin>>a>>b>>c;
		P p ;
		p.i = i;
		p.c1= a;
		p.c2= b;
		p.c3= c;
		s1.insert(a);
		s2.insert(b);
		s3.insert(c);
		pqc1.push(p);
		pqc2.push(p);
		pqc3.push(p);

	}	

	vector<P> c1;
	vector<P> c2;
	vector<P> c3;
	
	while(!pqc1.empty()){
		P p = pqc1.top();
		pqc1.pop();
		c1.pb(p);
	}	

	while(!pqc2.empty()){
		P p = pqc2.top();
		pqc2.pop();
		c2.pb(p);
	}	
	while(!pqc3.empty()){
		P p = pqc3.top();
		pqc3.pop();
		c3.pb(p);
	}	
	ll SOL= 0;

	if(s1.size()==1 || s2.size()==1 || s3.size()==1){

		cout<<-1<<endl;
	}else{

	for(auto x: c1){
		ll sol = 0;
		P p1 =x;
		sol+= p1.c1;
		P p2, p3;
		bool locFound = false;
		for(auto y: c2){
			p2 = y;
			if(p2.c2 <= p1.c2){
				break;
			}



			if(p1.i!=p2.i && p2.c1<p1.c1 && p1.c2< p2.c2 ){
				sol+= p2.c2;

				for(auto z: c3){
					p3 = z;
					if(p1.c3>=p3.c3 || p3.c3<=p2.c3){
						break;
					}
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
			SOL = max(sol, SOL);
			break;
		}
	}

	if(SOL==0){
		cout<<-1<<endl;
	}else{
	
		cout<<SOL<<endl;
	}
	}


	







	return 0;
}

