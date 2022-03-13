#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, obj;
	cin>>n>>obj;
	obj--;
	vector<int> a(n-1);
	vector<bool> visited(n-1,false);
	for(auto &x: a)cin>>x;
	int idx= 0;
	visited[0]=true;
	while(idx<=obj){
		visited[idx+a[idx]]=true;
		idx += a[idx];
		if(idx==obj)break;
	}
	if(visited[obj]){
		cout<<"YES"<<endl;
	}else {
		cout<<"NO"<<endl;
	}

}
