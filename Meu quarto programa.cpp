#include <iostream>
using namespace std;
//VARIAVEIS GLOBAIS
int n1,n2;
int main(){
	//VARIAVEIS LOCAIS
	int n3,n4; 
	//OPERADORES MATEMATICOS SOMA +, SUBTRACAO -, DIVISAO /, MULTIPLICACAO *, RESTO %, PARENTESES ()
	//VARIAVEL DE RESULTADOS
	int res0, res1, res2;
	n1=0;
	n2=1;
	n3=2;
	n4=3;
	res0= n1+n2+n3+n4;
	res1= n3/n2;
	res2= n3%n2;
	
	cout << "Soma de todas as variaveis: " << res0 << "\n\n";
	cout << "Resultado da divisao: " << res1 << "\n";
	cout << "Resto da divisao: " << res2 << "\n\n";
	
	return 0;
}
