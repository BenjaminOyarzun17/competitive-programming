#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b){
    return (a.second < b.second);
}


int main(){

map<char, pair<int, int>>keyboard;
keyboard['q']=make_pair(0,0);

keyboard['w']=make_pair(0,1);

keyboard['e']=make_pair(0,2);

keyboard['r']=make_pair(0,3);
keyboard['t']=make_pair(0,4);
keyboard['y']=make_pair(0,5);
keyboard['u']=make_pair(0,6);
keyboard['i']=make_pair(0,7);
keyboard['o']=make_pair(0,8);
keyboard['p']=make_pair(0,9);

keyboard['a']=make_pair(1,0);

keyboard['s']=make_pair(1,1);
keyboard['d']=make_pair(1,2);
keyboard['f']=make_pair(1,3);
keyboard['g']=make_pair(1,4);
keyboard['h']=make_pair(1,5);
keyboard['j']=make_pair(1,6);
keyboard['k']=make_pair(1,7);
keyboard['l']=make_pair(1,8);

keyboard['z']=make_pair(2,0);
keyboard['x']=make_pair(2,1);
keyboard['c']=make_pair(2,2);
keyboard['v']=make_pair(2,3);
keyboard['b']=make_pair(2,4);
keyboard['n']=make_pair(2,5);
keyboard['m']=make_pair(2,6);
	int t;
	cin>>t;
	while(t--){
		string original;
		int suggestions;
		cin>>original>>suggestions;
		vector<pair<string, int>>distances;
		for(int w = 0 ; w< suggestions; w++){
			string word;cin>>word;
			//cout<<word<<endl;
			int count = 0;
			for(int i = 0 ; i< word.size(); i++){
				if(word[i]==original[i])count++;	
				else{

					char error = word[i];	
					char correction = original[i];
					int distance = 0;
					distance+= abs(keyboard[error].first-keyboard[correction].first)+abs(keyboard[error].second-keyboard[correction].second);
					if(distance>0){
					//cout<<word<< ' '<<distance<<endl;
					cout<<word<<' '<<error<< ' '<< correction<< ' '<<distance<<endl;
					count+=distance;
			
					}
		
				}
				
			} 
			
			distances.push_back(make_pair(word, count));
		}
		sort(distances.begin(), distances.end());	
		for(auto x: distances)cout<<x.first<<' '<<x.second<<endl;

		
	}


	return 0;
}
