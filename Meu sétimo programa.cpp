#include <iostream>
using namespace std;
int main (){
	int n1=10;
	int n2=30;
	int n3=1;
	int n4=1;
	char opc='s';
	
	//ESTRUTURA DE COMANDO DE DECISAO
	//if(CONDICAO){
	//  OPCAO 1;
	//}else{
	//  OPCAO 2;
	//}
	//VALORES 0 E 1 DE VARIAVEIS DO TIPO INT E BOOL SAO INTERPRETADOS COMO FALSO E POSITIVO, RESPECTIVAMENTE
	//NESTE CASO SO E NECESSARIO INDICAR A VARIAVEL EM QUESTAO
	
	if(n1<n2){
		cout << "Variavel 1 menor que variavel 2\n\n";
	}else{
		cout << "Variavel 1 igual ou maior que variavel 2\n\n";
	}
	
	if(n3=0){
		cout << "VERDADEIRO\n\n";
	}else{
		cout << "FALSO\n\n";
	}
	
	if(n4){
		cout << "VERDADEIRO\n\n";
	}else{
		cout << "FALSO\n\n";
	}
	
	return 0;
}
