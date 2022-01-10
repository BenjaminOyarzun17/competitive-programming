#include<bits/stdc++.h>
using namespace std;

string abc= "abcdefghijklmnopqrstuvwxyz";



bool SearchAbc(string &s, map <char,int> &present){
	for(char  x: s){
		if(present.count(x)>0){
			present[x]++;
		}else{
			present[x]=1;
		}
	}
	if(present['a']!=0 && present['b']!=0 && present['c']!=0){
		return true;
	}else{
		return false;
	}
}


void foundABC(string s, map<char, int> &present){
	int n= s.size();
	bool firstB = false;
	string solve="";
	for(auto x: present){	
		for(int i = 0 ; i< x.second; i++){
			if (x.first == 'b'&&firstB == false){
				firstB = true;
				solve.push_back('c');
				solve.push_back('b');
				present['b']--;
				present['c']--;		
			}else{
				solve.push_back(x.first);
			}
		
		}
	
	}
	cout<<solve;
	//printf("%s", solve);
	printf("\n");

}



void  abcNotFound(map<char, int> &present){
	string solve = "";
	for(auto x:present){
		for(int i = 0; i< x.second; i++){
			solve.push_back(x.first);
		
		}
	
	
	}
	//printf("%s",solve);
	cout<<solve;
	printf("\n");
}




void solve(){
	int t;
	scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		map<char, int>present;
		bool search = SearchAbc(s, present);
		if(search){
			cout<<"f"<<endl;

			foundABC(s, present);	
		}else{
			cout<<"nf"<<endl;

			abcNotFound(present);

		}	
	}	
}





int main(){	
	solve();


	return 0;

}






