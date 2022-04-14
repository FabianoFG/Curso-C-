#include <iostream>
using namespace std;
int main(){
	int n1;
	n1=10;
	//OPERACOES COM VARIAVEIS
	//n1=n1+1, n1=n1-1, n1=n1*1, n1=n1/1 FORMA COMPLETA
	//n1+=1, n1-=1, n1*=1, n1/=1 FORMA REDUZIDA
	//n1++, ++n1, n1--, --n1 FORMA REDUZIDA ADICIONA OU SUBTRAI UMA UNIDADE DA VARIAVEL
	//n1++ ADICIONA DEPOIS DE EXIBIR E ++n1 ADICIONA ANTES DE EXIBIR
	cout << n1 << "\n\n";
	n1=n1+1;
	cout << n1 << "\n\n";
	n1+=1;
	cout << n1 << "\n\n";
	cout << ++n1 << "\n\n";
	cout << n1++ << "\n\n";
	cout << n1 << "\n\n";
	return 0;
}
