#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

	ll maxLen = 0;
	string s;
	vector<string> words;
	while(getline(cin, s)){
		words.push_back(s);
		maxLen = max(maxLen, (ll)s.size());
	}
	for(int i = 0 ; i< maxLen+2 ; i++){
		cout<<"*";
	}	
	cout<<endl;
	ll leftShift= 0, rightShift = 1;
	for(auto x: words){
		ll left  =  maxLen - x.size();
		cout<<"*";
		if(left&1){
			for(int i = 0; i< left/2 +leftShift; i++){
				cout<<' ';
			}	
			cout<<x;

			for(int i = 0; i< left/2+rightShift; i++){
				cout<<' ';
			}	
			ll dumm = leftShift;
			leftShift = rightShift;
			rightShift=dumm;
		}else{

			for(int i = 0; i< left/2 ; i++){
				cout<<' ';
			}	
			cout<<x;

			for(int i = 0; i< left/2; i++){
				cout<<' ';
			}	
		}
	
		cout<<"*"<<endl;

	}


	for(int i = 0 ; i< maxLen+2 ; i++){
		cout<<"*";
	}	
	return 0;

}
