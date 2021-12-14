#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll bintoInt(string bin){
	//transforma un numero binario en un numero decimal
	ll num = 0;
	ll len = bin.size()-1;
	for(int i = 0 ; i< (int)bin.size(); i++){
		num+= (bin[i]-'0')*pow(2,len);
	       len--;	
	
	}

	return num;


}


void solve(){

	int t ; 
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int minex;
		vector<int>maxme;
		vector<int> a;
		for(int i = 0 ; i< n ; i++){
			int l; 
			cin>>l;
			a.push_back(l);
			
		}
		
		

		int len = n;
		if(n==1){
			cout<<a[0]<<endl;
		}else{
			while(len>1){
				
				
				int mi= 50000;
				for(auto x: a)mi = min(mi, x);
				minex = mi;
				//cout<<minex<<endl;
				maxme.push_back(minex);
				bool deleted = false;
				vector<int>copy;
				for(auto x: a)copy.push_back(x);
				a.clear();
				for(auto x: copy){
					if(x==minex && deleted == false){
						deleted =  true;
					}
					if(x!= minex || deleted ==true){
						a.push_back(x);
					}
					
				}
				for(int i = 0 ; i< (int)a.size(); i++){
					a[i]-=minex;
				}

				//for(auto x: a)cout<<x<<' ';
				//	cout<<endl;
				
				len--;

			}



			

			int M = -10000;
			for(auto x: maxme) M = max(M, x);
			
			
			//cout<<endl;

			
			cout<<M<<'\n';
		}
	}

}


int main(){

	
	solve();

	return 0 ; 
}
