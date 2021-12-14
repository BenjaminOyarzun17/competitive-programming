#include<bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(){

	int t ; 
	cin>>t;
	while(t--){
		int n, a, b;
		cin>>n>>a>>b;
		vector<int>sol;
		if(a>b){
			if(a-b==1&& b==n/2){
				for(int i = a; i<=n ; i++){
					sol.push_back(i);
				}	
				for(int i = 1; i<=b; i++){
					sol.push_back(i);
				}
				for(auto x: sol)cout<<x<<' ';
				cout<<'\n';



			}else{
				cout<<-1<<'\n';
			}
		
		
		}else{
			
			

			deque<int>middle;
			bool isEmpty =false;
			vector<int> left;
			vector<int> right;
			for(int i = a+1; i < b ; i++){
				middle.push_back(i);
			}
			for(int i = 1 ; i<a; i++){
				right.push_back(i);
			}

			right.push_back(b);
			left.push_back(a);

			for(int i=b+1  ; i< n+1; i++){
				left.push_back(i);
			}
			int countRight = right.size() ; 
			//cout<<countRight<<endl;
			while(countRight<n/2){
				right.push_back(middle.front());
				
				middle.pop_front();	
					
				countRight++;
			
			}
			
			if(middle.front()==0 &&n!=2){
					isEmpty=true;
			}	

			//cout<<left.size()<<'+'<<middle.size()<<endl;
			//cout<<middle.empty()<<endl;
			
			if (left.size()+ middle.size()== n/2 && isEmpty!=true){
				
			
				int countLeft = left.size(); 
				
				while(countLeft< n/2){
					left.push_back(middle.front());
					middle.pop_front();

					countLeft++;
				}	

				for(auto x:left){
					cout<<x<<' '; 
				} 
				for(auto x: right){
					cout<<x<<' '; 
				}
				cout<<'\n';
			
			}else{
				cout<<-1<<endl;
			}



			
			
			
		
		
		
		}
	}

}


int main(){

	
	solve();

	return 0 ; 
}
