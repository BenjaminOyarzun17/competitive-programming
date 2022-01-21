#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


int main(){
	ll EURO_MAX_KOMMASTELLEN = 2;
	vector<ll> EURO_MOEGLICHKEITEN = {200, 100, 50, 20 ,10, 5,2,1};



	double geld = 0.99;

	ll kommastellenGrenz= (ll)pow(10, EURO_MAX_KOMMASTELLEN);
	ll cents = geld*kommastellenGrenz;
	
	map<ll, ll> losung;
	for(auto x: EURO_MOEGLICHKEITEN){
		losung.insert(pair<ll,ll>(x, (ll)cents/x));
		cents = cents%x;
	}
	for(auto &pair: losung){
		cout<<(double)pair.first/kommastellenGrenz<<" Euro: "<<pair.second<<endl;

	}
	
	



	return 0;

}




