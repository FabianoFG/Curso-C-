#include <iostream>
using namespace std;

int main(){
	
	/* do while - comando de loop que primeira executa o bloco de comandos para depois verificar a condicao
	usado quando e preciso executar no minimo uma vez o bloco de comandos*/
	
	int n;
	
	n=20;
	
	do{
		cout << "\n" << n << "\n";
		n++;
	}while(n<20);
	
	cout << "\nRotina finalizada\n";
	
	return 0;
}
