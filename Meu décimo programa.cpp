#include <iostream>
using namespace std;

int main(){
	int n1, n2, nota, x;
	string res;
	
	//OPERADOR TERNARIO
	//(EXPRESSAO) ? valor1 : valor2;
	
	cout << "\n\nDigite a primeira nota: ";
	cin >> n1;
	cout << "\n\nDigite a segunda nota: ";
	cin >> n2;
	nota=n1+n2;
	
	//nota>=60 Aprovado
	//nota<60 Reprovado
	
	(nota>=60) ? res="Aprovado" : res="Reprovado";
	cout << "\nSituacao do aluno: " << res << "\n";
	
	(nota>=60) ? "Aprovado" : "Reprovado";
	
	x=0;
	
	(nota>=60) ? x++ : x--;
	cout << "\n" << x << "\n";
	
	
	
	return 0;
}
