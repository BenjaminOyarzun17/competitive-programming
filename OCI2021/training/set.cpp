#include<bits/stdc++.h>

using namespace std;

int main(){
	set<int> s;
	set<int> ::iterator it;
	int n; cin>>n;
	
	for(int i = 0 ; i< n ; i++){
		int a; cin>>a;
		s.insert(a);

	}
	it = s.find(8);
	cout<<*it<<endl;
	return 0;
}
