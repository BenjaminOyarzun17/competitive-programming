
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	string line;
	while(getline(cin, line)){
		//string line;	
		//getline(cin, line);
		stringstream s(line);	
		ll sub = 0;
		ll sum= 0;	
		while(s>>sub){
			sum += sub;
		}
		cout<<sum/2<<'\n';
	}	
		
	return 0;


}
