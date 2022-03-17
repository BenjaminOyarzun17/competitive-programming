#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		set<char> left;
		set<char> right;
		vector<char> leftv;
		vector<char>rightv;
		if(s.size()&1){
			for(int i = 0 ; i<s.size()/2; i++){
				left.insert(s[i]);
			}

			for(int i = (s.size()/2)+1 ; i<s.size(); i++){
				right.insert(s[i]);
			}
			//cout<<left.size()<<' '<<right.size()<<endl;
		}else{
						
			for(int i = 0 ; i<s.size()/2; i++){
				left.insert(s[i]);
			}

			for(int i = (s.size()/2) ; i<s.size(); i++){
				right.insert(s[i]);
			}
		}
		if(left.size()==right.size()){
			bool broken = false;
			for(auto x: left) leftv.push_back(x);
			for(auto x: right) rightv.push_back(x);
			
			for(int i = 0 ; i< leftv.size(); i++){
				if(leftv[i]!=rightv[i]){
					broken = true;
					break;
				}
			}
			if(broken) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}





	}
	return 0;
}
