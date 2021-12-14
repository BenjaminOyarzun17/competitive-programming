

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll bintoInt(string bin){

	ll num = 0;
	ll len = (int)bin.size()-1;
	for(int i = 0 ; i< (int)bin.size(); i++){
		num+= (bin[i]-'0')*pow(2,len);
	       len--;	
	
	}

	return num;


}



string carbonDioxide(vector<string>&bits){
	char minBit;
	int objectiveCol = 0; //
	vector<string> aux1;
	int initialCount = 0 ; 
	for(auto x: bits){
		if(x[0]=='1'){
			initialCount ++;	
		}
	}
	if(initialCount<=500){
		minBit=1;
	}else{
		minBit = 0;
	}
	for(auto x: bits)aux1.push_back(x);
	while(aux1.size()!= 1&&objectiveCol !=12){
		vector<string> aux2;
		int onesCount =0;
		for(auto x: aux1){
			if(x[objectiveCol]=='1'){
				onesCount++;
			}
		}
		if(onesCount <= (int)(aux1.size()/2)){
			minBit = '1';
		}else {minBit ='0';}
		
		for(auto x: aux1){
			if(x[objectiveCol]==minBit){
				aux2.push_back(x);
			}
		}
		aux1.clear();
		for (auto x: aux2) aux1.push_back(x);
		aux2.clear();	
		
		
		objectiveCol++;

	}
	//cout<<aux1[0]<<endl;
	return aux1[0];



}





string oxygen(vector<string>&bits){
	
	char maxBit;
	int objectiveCol = 0; //
	vector<string> aux1;
	

	int initialCount = 0 ; 
	
	for(auto x: bits){
		if(x[0]=='1'){
			initialCount ++;	
		}
	}
	if(initialCount>=500){
		maxBit=1;
	}else{
		maxBit = 0;
	}
	for(auto x: bits)aux1.push_back(x);
	while(aux1.size()!= 1&&objectiveCol !=12){
		vector<string> aux2;
		int onesCount =0;
		for(auto x: aux1){
			if(x[objectiveCol]=='1'){
				onesCount++;
			}
		}
		if(onesCount >= (int)(aux1.size()/2)){
			maxBit = '1';
		}else {maxBit ='0';}
		
		//cout<<maxBit<<endl;
		for(auto x: aux1){
			if(x[objectiveCol]==maxBit){
				aux2.push_back(x);
			}
		}
		aux1.clear();
		for (auto x: aux2) aux1.push_back(x);
		aux2.clear();	
		
		
		objectiveCol++;

	}
	
	
	return aux1[0];

	//cout<<aux1[0]<<endl;

}

void solve(){
	int n= 1000;
	vector<string> bits(n);
	for(auto &x: bits)cin>>x;
	string co2= carbonDioxide(bits);
	string o2= oxygen(bits);
	cout<<(o2)<<' '<<(co2)<<endl;
	
	cout<<bintoInt(o2)<<' '<<bintoInt(co2)<<endl;

	cout<<bintoInt(o2)*bintoInt(co2)<<endl;

}


int main(){

	
	solve();

	return 0 ; 
}

