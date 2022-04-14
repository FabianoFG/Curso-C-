#include <iostream>
using namespace std;

int main(){
	
	int l;
	char palavra[l];
	int c;
	
	cout << "\nJogador 1: escolha uma palavra";
	cout << "\nJogador 1: digite o numero de letras da palavra escolhida: ";
	cin >> c;
	cout << "\nDigite a palavra escolhida: ";
	for(l=0; l<c; l++){
		cin >> palavra[l];
	}
	
	for(l=0; l<c; l++){
		cout << palavra[l];
	}
	
	
	
	cout << "\n\nPROGRAMA FINALIZADO\n\n";
	
	return 0;
}
