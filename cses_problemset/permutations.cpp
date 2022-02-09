#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	if(n<=3){
		cout<<"NO SOlUTION"<<endl;
	}else{
	if(n &1){
		for(int i = 1; i<= n ; i+=2){
			cout<<i<<' ';
		}
		for(int i = 2; i<= n-1; i+=2){
			cout<<i<<' ';
		}
	}else{

		for(int i = 2; i<= n ; i+=2){
			cout<<i<<' ';
		}
		for(int i = 1; i<=  n-1; i+=2){
			cout<<i<<' ';
		}
	
	}
	}

	return 0;

}
