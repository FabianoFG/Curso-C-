#include <iostream>

using namespace std;
//PARA PERMITIR EXECUÇÃO DE FUNÇÕES OMITINDO O ARGUMENTO, É NECESSÁRIO ESTABELECER UM VALOR PADRÃO
void imp(string txt="Valor padrao");

int main(){
	//NÃO DECLARANDO VALOR
	imp();
	//DECLARANDO VALOR
	imp("testando");
	
	return 0;
}

void imp(string txt){
	cout << "\n" << txt << "\n";
}
