#include<bits/stdc++.h>

typedef long long ll;
using namespace std;



ll intpow(ll n, ll e) {
	return (int)(pow(n, e) + 1e-9); 


}


vector<ll> primeFactors(ll n){
    vector<ll>factors;
    while (n % 2 == 0) 

    { 
	factors.push_back(2);
        n = n/2; 

    } 
    for (ll i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
	    factors.push_back(i);
            n = n/i; 
        } 
    } 

    if (n > 2) factors.push_back(n);
    return factors;
} 



}

vector<ll> SieveOfEratosthenes(ll n)
{
    vector<ll>primes;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (ll p = 2; p <= n; p++)
        if (prime[p])
    		primes.push_back(p);
    return primes;

}
//fast parity
bool fParity(int n){
	if(n&1){
        return false;
    }else{
        return true;
    }

}






void solve(){
	ll t;
	scanf("%lld", &t);
	while(t--){
        int n;
        cin>>n;
        cout<<fParity(n)<<endl;
	}
}





int main(){
   
	solve();
	return 0;


}


