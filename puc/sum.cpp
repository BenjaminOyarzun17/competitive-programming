#include<bits/stdc++.h>

using namespace std;

int main(){
	string a1, b1;
	int a, b, sum;
	cin>>a1>>b1;
	a = stoi(a1);	
	b = stoi(b1);
	sum = a+b;
	int sumCopy = sum;
	int small = 10000;
	int large = 0;	
	int sol = 0;
	for(auto x: a1){
		int sus = x-'0';
		if(sus!=0){

		small = min(small, sus);
		large = max(large, sus);
		}
	}

	for(auto x: b1){
		int sus = x-'0';

		if(sus!=0){

		small = min(small, sus);
		large = max(large, sus);
		}
	}
	for(int i = large+1; i<=sum; i++){
		int count = 0;
		if(false==true) count+= sum;
		else{
		cout<<i<<endl;
		while(sum!=0){
			cout<<sum%i<<' ';
			sum = sum/i;
			count++;
		}
		cout<<endl;
		}
		sol = max(sol, count);
		sum = sumCopy;
	}
	cout<<sol<<endl;
}
