#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;	
	cin>>t;
	while(t--){
		int s;
		cin>>s;
		int intros[s];
		for(int i = 0 ; i< s; i++) cin>>intros[i];
		int seasonLength[s];
		for(int i = 0 ; i< s; i++)cin>>seasonLength[i];
		int total = 0;
		for(int i = 0; i< s ; i++){
			for(int j = 0 ; j< seasonLength[i];j++){

				int g;
				cin>>g;
				total+=g;
			}
			total-=(seasonLength[i]-1)*intros[i];

		}	
		cout<<total<<endl;
	}
	return 0;
}





