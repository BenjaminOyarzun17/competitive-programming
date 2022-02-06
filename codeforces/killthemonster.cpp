#include<bits/stdc++.h>


using namespace std;


bool test(int hc,int dc,int hm,int dm){
	if(floor((double)hm/dc) ==1){

		return true;
	}


	if(floor((double)hm/dc) +1<= floor((double)hc/dm)+1 ){
		
		return true;

	}else {
	   
		return false;

	}


}



void solve(){
	int t;
	cin>>t;
	while(t--){
		int hc, dc, hm, dm, k, w,a;

		cin>>hc>>dc>>hm>>dm>>k>>w>>a;
		
		if(test(hc, dc, hm, dm)){
			cout<<"YES"<<endl;
			
		}else{
			bool success= false;
			for(int i = 0 ; i<= k-1 ; i++){
				for(int j = i+1; j<= k; j++){
					

					if(test(hc+i*a, dc+j*w,hm, dm)){
						
						success= true;
						
					}
					if(test(hc+j*a, dc+i*w,hm, dm)){
						success= true;
						
					}

				}
			}			
			if (success){
				cout<<"YES"<<endl;
			}else{ 
				
				
				cout<<"NO"<<endl;

			}


	
		}

	}
}



int main(){
	solve();

	return 0;

}



