#include <iostream>

using namespace std;

//DECLARA플O DE FUN합ES
void texto();
void soma1(int n1, int n2);
int soma2(int n1, int n2);
void trans(string transp[4]);

int main(){
	int resposta;
	string transporte[4]={"moto","carro","aviao","trem"};
		
	resposta=soma2(85,15);
	//CHAMADA DAS FUN합ES
	texto();
	soma1(15,5);
	
	//RETORNANDO VALORES
	cout << "\nResultado da outra soma: " << soma2(75,50); //OU
	cout << "\nResultado da outra soma: " << resposta;
	
	trans(transporte);
	
	return 0;
}

//FUN플O SEM ARGUMENTO
void texto(){
	cout << "\nGracas a Deus";
	
}

void soma1(int n1, int n2){
	cout << "\nResultado da soma: " << 	n1+n2;
	
}
int soma2(int n1, int n2){
	return n1+n2;
}

void trans(string transp[4]){
	cout << "\n\n";
	for(int n=0; n<4; n++){
		cout << transp[n] << "\n";
	}
	
	
}
