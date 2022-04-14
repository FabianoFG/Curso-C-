#include <iostream>
using namespace std;

int main(){
	
	//for(ini ; cond ; inc/dec){
		//comando
    //}
	
	int x,y,z;
	
	for(x=0, y=1, z=0 ; x<=10 && z<=6 ; x++, y+=2, z+=2){
		cout << "\n" << x << "-" << y << "-" << z << "\n";
		
	}
	
	//for sem corpo - usado para constagens
	
	for(int tmp=0 ; tmp<1000000000 ; tmp++){}
	
	cout << "\nContagem finalizada\n";
	
	return 0;
}
