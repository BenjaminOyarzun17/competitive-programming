#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

ll intlog(double base, double x) {
    return (ll)(log(x) / log(base));
}
void solve(){


	ll t;
	scanf("%lld", &t);
	/*
	ll extras = 0 ; 
	ll npow =  intlog(5, t);
	
	if(npow !=1){

		for(ll i = 2; i<= npow; i++){
			extras+= (i-1);
			extras+= (t/(ll)pow(5, i))-((t/(ll)pow(5, i))/5);
		}
	}
*/


	ll count = 0 ; 
	for(int i = 5; t/i>=1; i*=5){
		count+= t/i;
		//la condicion verifica que i sea menor o igual que n de una forma mas conveniente
		//la idea es ir contando la cantidad de veces que es divisible por un multiplo de una POTENCIA de 5. 

	}





	cout<<count<<endl;


}





int main(){
	
	solve();
	return 0;


}

