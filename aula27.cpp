#include <iostream>

using namespace std;

int main(){
	//enum permite a designa��o de um "tipo" de vari�vel, � qual s�o listados os valores admiss�veis 
	//e pode ser atribuida um dos valores estabelecidos, posteriormente;
	//tem como fun��o listar numerais interios identificados por strings
	//atribui, por padr�o, valores a partir de 0 em ordem crescente, caso n�o seja especificado o seu valor num�rico
	enum armas{fuzil=35, revolver=5, escopeta=8, metralhadora=40};
	armas armasel;
	
	armasel=escopeta;
	
	cout << armasel;
	
	return 0;
}
