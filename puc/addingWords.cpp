#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
stringstream: 

lee un string que contiene otros string separados por un espacio y los separa en strings mas
pequenos. de esta forma se puede generar un equivalente a s.spli() de python..

map, caso no existe la key en C++:
	- te returnal NULL/ o 0;

*/



int main(){
	ll volume = 2000;
	map<string, ll> word2val;
	map<int, string> val2word;
	string line;
	while(volume--){
		cin>>s;
		stringstream ss;
		ss <<line;
		string command;
		ss>> command;
		if(command == "clear"){
			word2val.clear();
	
			val2word.clear();
		}else if(command == "def"){
			string w; int v; ss>>w>>v;
			if(word2val.count(w)){
				wal2word.erase(word2val[w]);
			}
			word2val[w]=v;
			val2word[v]==w;
		}else{
			assert(command =="calc");
			string w, op; ss>>w;
			int ans = 0;
			bool valid = true;

			if(word2val.count(w)==0){
				valid = false;
			}else{
				ans = word2val[w];	
			}
			while(valid && (ss>>op>>w)){
				if(word2val.count(w)==0){
					valid = false;
					break;
				}
				if(op == "+"){
					ans += word2val[w];
				}else ans-=word2val[w];
			}						
			cout<<line.substr(5)<<" ";
			if(valid){
				auto it = val2word.find(ans);
				if(it = valwword.end()){
					cout<<"unknown\n"<<;
				}else{
					cout<<it-second<<endl;
				}
			}else{
				cout<<"unknown\n";
			}

		}

	}


	

	return 0;
}
