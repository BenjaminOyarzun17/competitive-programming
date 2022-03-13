#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

	int n;
	cin>>n;
	string s;
	for(int i = 0 ; i< n ; i++){
		s.push_back('0');
	}
	int current= n-1;
	int count = 2;
	cout<<s<<endl;
	
	while(count<=pow(2, n)){
		if(current == n-1 && s[current]=='0'){
			s[current]= '1';
		}else if(s[current]=='1' && s[current-1]=='0' && current !=0){
			s[current-1]='1';
			s[current] = '0';
			current --;
		}else if (current ==0 && s[current]=='0'){
			s[current]='1';
			current = n-1;
		}else if(s[current] =='1' && s[current-1]=='1' && current !=0){
			current = n-1;
			s[current]='1';
		}else if(current == 0 && s[current]=='1'){
			current = n-1;
			s[current]= '1';
		}
		
		cout<<s<<endl;
		count++;
	}
	return 0;	

}
