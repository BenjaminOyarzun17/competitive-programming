#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll n;
	cin>>n;
	deque<char>rep;
	for(int i = 0 ; i<= log2(n) ; i++){
		if((n>>i)&1){
			rep.push_front('1');
		}else rep.push_front('0');
	}
	ll sol=0;
	for(int i = 0 ; i< rep.size(); i++){
		if(rep[i]=='1'){
			sol += (ll)pow(2, i);
		}	
	}
	//for(auto x: rep) cout<<x;
	//cout<<endl;
	cout<<sol<<endl;
	return 0;

}
