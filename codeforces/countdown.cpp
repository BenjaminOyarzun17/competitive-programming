#include<bits/stdc++.h>

using namespace std;
using ll = long long;




int main(){

	int t ; 
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string clock ;
		cin>>clock;
		string nonZero;
		int skipped = 0;
		


		for(auto x: clock){
			if (x!= '0'){
				nonZero.push_back(x);

			}else{
				
				skipped++;


			}
		}




		if (nonZero.size()==0){
			cout<<0<<'\n';
		}else{
			int suma = 0;
			for(auto x: nonZero){
				suma += x- '0';cm
			}
			cout<<suma+skipped<<'\n';




		}




	}




	return 0 ; 
}