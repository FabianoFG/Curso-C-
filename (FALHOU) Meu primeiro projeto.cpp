#include <iostream>
using namespace std;
int main(){
	double radicando;
	double indice;
	double raiz;
	double aprox1=1;
	double aprox2;
	char opcao;
	
	inicio:
	
	cout << "\n\nDigite o valor do radicando: ";
	cin >> radicando;
	cout << "\n\nDigite o valor do indice: ";
	cin >> indice;
		
	calculo:
		
	aprox2=aprox1*aprox1;
	if(aprox2==radicando){
		raiz=aprox1;
		cout << "\n\n Resposta: " << raiz;
	}else if(aprox2<radicando){
		aprox1=aprox1+0.01;
		goto calculo;
	}else{
		aprox1=aprox1-0.01;
		raiz=aprox1;
		cout << "\n\nResposta: " << raiz;
	}
		
	cout << "\n\nDeseja calcular outra raiz? [s/n]: ";
	cin >> opcao;
	if (opcao=='s' or opcao=='S'){
		goto inicio;
	}
	
	
	return 0;
}
