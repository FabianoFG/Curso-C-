#include <iostream>
using namespace std;

int main(){
	//array - sintaxe usada para criar vetores 
	//array unidimensional
	//valores do vetor podem ser inicializados na propria declaracao
	int vetor[5]=[10,20,30,40,50];
	int vetor1[tam];
	int i;
	int tam=5;
	
	vetor[0]=10;
	vetor[1]=20;
	vetor[2]=30;
	vetor[3]=40;
	vetor[4]=50;
	
	cout << vetor[0] << "\n";
	
	//usando comando for para simplificar atribuicao e utilizacao dos valores 
	//forma simples
	for(i=0 ; i<5 ; i++){
		cout << vetor[i] << "\n";
	}
	
	//usando variavel (i) com limite em sizeof
	for(i=0 ; i<sizeof(vetor)/4 ; i++){
		cout << vetor[i] << "\n";
	}
	
	//usando variavel (i) com variavel de tamanho (tam) (nao permite inicializacao devalores na declaracao do vetor)
	for(i=0 ; i<tam ; i++){
		cout << vetor[i] << "\n";
	}
	
	return 0;
}
