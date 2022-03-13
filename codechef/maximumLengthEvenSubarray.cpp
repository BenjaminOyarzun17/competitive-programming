#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;	
	cin>>t;
	while(t--){
		ll x;
		cin>>x;
		cout << ((x * (x + 1)) / 2 % 2 == 0 ? x : x - 1) << '\n';
	}

}




