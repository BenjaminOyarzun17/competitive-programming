#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;	
		int current  = s.size()-1;
		int zeros= 0;
		while(true){
			if(s[current]=='0'){
				zeros++;
				current--;
			}
			else{
				break;
			}
		}
		for(int i = s.size()-1-zeros; i>=0; i--){
			cout<<s[i];
		}	
		cout<<endl;
	}
	return 0;
}
