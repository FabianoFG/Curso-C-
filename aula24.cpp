#include <iostream>

using namespace std;
//PARA PERMITIR EXECU��O DE FUN��ES OMITINDO O ARGUMENTO, � NECESS�RIO ESTABELECER UM VALOR PADR�O
void imp(string txt="Valor padrao");

int main(){
	//N�O DECLARANDO VALOR
	imp();
	//DECLARANDO VALOR
	imp("testando");
	
	return 0;
}

void imp(string txt){
	cout << "\n" << txt << "\n";
}
