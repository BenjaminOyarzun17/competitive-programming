#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*

espacio muestral: 

	si es ques on maximo 10 pares de parentesis, por cada par puedo decidir si 
	lo pongo o no. 
	por ende 2^10 -1; dado que una combinacion no es valida. 


*/

int main(){
	string exp;
	cin>>exp;
	ll pcount = 0;	
	stack<int>pending;
	vector<pair<int, int>>pairs;
	for(auto x: exp){
		if(x=="("){
			pcount ++;
		}
	}
	for(int i = 0 ;i< exp.size() ;i++){
		
		if(exp[i]=="("){
			pairs.push(exp[i]);
		}
		
		if(exp[i]==")"){
			pairs.push_back(make_pair(pairs.top, i));
			pairs.pop();
		}
	}	
	

	return 0;
}
