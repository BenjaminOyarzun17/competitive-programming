#include<bits/stdc++.h>

using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	int r = a-b;
	string s = to_string(r);
	if(s[s.size()-1]=='9'){
		s[s.size()-1]='1';
	}else{
		int cam= s[s.size()-1]-'0';
		cam ++;
		s[s.size()-1]= '0'+cam;
	}

	cout<<s<<endl;
}
