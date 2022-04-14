#include <iostream>

using namespace std;

int main(){
	//enum permite a designação de um "tipo" de variável, à qual são listados os valores admissíveis 
	//e pode ser atribuida um dos valores estabelecidos, posteriormente;
	//tem como função listar numerais interios identificados por strings
	//atribui, por padrão, valores a partir de 0 em ordem crescente, caso não seja especificado o seu valor numérico
	enum armas{fuzil=35, revolver=5, escopeta=8, metralhadora=40};
	armas armasel;
	
	armasel=escopeta;
	
	cout << armasel;
	
	return 0;
}
