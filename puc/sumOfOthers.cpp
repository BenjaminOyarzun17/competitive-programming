
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int x;	
	while(cin>>x){
		string line;	
		getline(cin, line);
		stringstream s(line);	
		ll sub = 0;
		ll sum= 0;	
		while(s>>sub){
			sum += sub;
		}
		cout<<sum<<'\n';
	}	
		
	return 0;


}
