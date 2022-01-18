#include<bits/stdc++.h>

using namespace std;
using ll = long long;


int lunes(int hoy, vector<vector<int>>&calendario){

	bool visited = true;
	int actual;
	if(hoy ==30){
		actual = 1;
	}else{
		actual = hoy+1;
	}
	
	while(visited){
		if(calendario[hoy][2]==0){
			 visited= false;
		}else{
			if(actual ==30){
				actual = 1;
			}else{
			actual ++;

			}

		}

		if(actual == hoy){
			actual = -1;
			break;
		}


	}

	return actual;



}



int martes(int hoy){
	int nuevoHoy = 31-hoy;
	return nuevoHoy;
}




int miercoles(int hoy){
	if(hoy %2 ==0){
		int sol = hoy-1;
		if(sol< 0){
			return -1;
		}else{
		return hoy-1;

		}

	}else if(hoy%2!=0){
		int sol = hoy+1;

		if(sol>30){
			return -1;
		}


		return hoy+1;
	}

}

int jueves(int hoy){
	int nuevoHoy = hoy+10;
	if(nuevoHoy>30){
		return nuevoHoy-30;
	}

	return nuevoHoy;

}

int viernes(int hoy){
	if(hoy%2==0){
		return hoy/2;

	}else{
		int nuevoHoy = 3*hoy+1;
		while(nuevoHoy>30){
			nuevoHoy-= 30;
		}
		return nuevoHoy;
	}

	

	

}

int sabado(int hoy){
	int nuevoHoy = 2*hoy;
	while(nuevoHoy>30){
		nuevoHoy-= 30;

	}

	return nuevoHoy;

}

int domingo(int hoy, vector<vector<int>>&calendario){
	bool visited = true;
	int actual;
	if(hoy ==30){
		actual = 2;
	}else if(hoy == 29){
		actual = 1;
	}else{
		actual = hoy+2;
	}
	
	while(visited){
		if(calendario[hoy][2]==0){
			visited = false;
		}else{
			if(actual==29){
				actual = 1;
			}else if (actual == 30){
				actual = 2;
			}else{
				actual +=2;

			}
		}
		if(actual == hoy){
			actual = -1;
			break;
		}


	}

	return actual;


}

int ejecutarAccion(int hoy, vector<vector<int>>&calendario){
	bool visited = false;
	int next = hoy+1;
	if(calendario[hoy][2]==1){
		return -1;
	}else{

		if(calendario[next-1][1]==0){

			next = lunes(hoy, calendario);
		}else if(calendario[next-1][1]==1){
			next = martes(hoy);
			
		}else if(calendario[next-1][1]==2){
			next = miercoles(hoy);
			
		}else if(calendario[next-1][1]==3){
			next = jueves(hoy);
			
		}else if(calendario[next-1][1]==4){
			next = viernes(hoy);
			
		}else if(calendario[next-1][1]==5){
			next = sabado(hoy);
			
		}else if(calendario[next-1][1]==6){
			next = domingo(hoy, calendario);
			
		}
		if(calendario[next][2]==1 || next==-1){
			return -1;
		}else{ 
			return next;
		}



//		return next;





	}



}






void solve(){

	int d, hoy;
	cin>>d>>hoy;

	vector<vector<int>>calendario;
	int dia=d;
	int fecha=1;
	while(fecha<=30){
		vector<int> par= {fecha, dia, 0};
		calendario.push_back(par);
		if(dia ==6){
			dia = 0;
		}else{
			dia++;
		}
		fecha++;
	}
	
	
	int count = 0;
	while(true){
		if(count > 100000){
			cout<<"loop infinito";
			break;
		}
		int next = ejecutarAccion(hoy-1, calendario);
		if(next ==-1 ){
			break;
			
		}else{
			calendario[hoy-1][2]=1;
			hoy = next;
		}

		//scout<<hoy<<endl;
		count ++;

	}
	
	cout<<hoy<<endl;



}


int main(){

	
	solve();

	return 0 ; 
}
