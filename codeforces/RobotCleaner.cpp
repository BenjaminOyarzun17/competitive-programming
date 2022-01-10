
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
void solve(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,m,rb,cb,rx, cx;
		cin>>n>>m>>rb>>cb>>rx>>cx;
		int counter =  0;
		int d1, d2;
		d1 = 1;
		d2 = 1;
		while(counter< 10000){
			
			//if(t==4)cout<<rb<<' '<<cb<<endl;

			if((rb==1 && d1==-1) || (rb==n && d1==1)){
				d1=-1*d1;
			}
			if((cb==1 && d2==-1) || (cb==m && d2==1)){
				d2= -1*d2;
			}
			
			
			if(rb==rx || cb==cx){
				break;
			}
			rb+= d1;
			cb+= d2;

			counter++;

		}
		if(counter==10000){
			printf("%s\n","error");
		
		}else{
			printf("%d\n", counter);
		}
	
	
	
	}


}


int main(){
	solve();

	return 0;

}




