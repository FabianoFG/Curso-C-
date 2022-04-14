#include <iostream>
using namespace std;
int main (){
	//TIPO NOME;
	//TIPO NOME=VALOR;
	int inteiro=0;
	char letra='a';
	double decimal=2.35;
	float decimalar=2.3;
	bool condicao=true;
	string texto="Fabiano";
	
	//DETERMINAR VALOR PELO TECLADO
	cout << "Determine um numero inteiro:";
	cin >> inteiro;
	cout << "Digite uma letra:";
	cin >> letra;
	cout << "Determine um decimal:";
	cin >> decimal;
	cout << "Escreva seu nome:";
	cin >> texto;
		
	//IMPRIMIR SEPARADOS
	cout << "\nNumero inteiro:" << inteiro;
	cout << "\nLetra:" << letra;
	cout << "\nNumero decimal:" << decimal;
	
	//OU JUNTOS
	cout << "\nNumero decimal arredondado:" << decimalar << "\nCondicao:" << condicao << "\nNome:" << texto;
	
	cout << "\nEstou aprendendo rapido ate\nhehehehehe\n";
	system ("pause");
	return 0;
	
}
