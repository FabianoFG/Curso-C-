#include <iostream>
#include <stdio.h>// BIBLIOTECA DE PRINTF E SCANF
#include <math.h>// IBLIOTECA MATEMÁTICA
#include <iomanip>// MANIPULAÇÃO DE INPUT/OUTPUT // PARA USO DE SETBASE

using namespace std;

int main(){
	
	int num=10;
	
	float pi=M_PI;// M_PI => constante pi na biblioteca math.h
	
	printf("Valor de pi: %08.2f\n", pi);// adicionar .número para definir o número de casas decimais a serem impressos // e 0número para o número total de caracteres
	
	cout << "Valor de num em dec: " << num << "\n";
	cout << "Valor de num em hex: " << hex << num << "\n";
	cout << "Valor de num em oct: " << oct << num << "\n";
	cout << "Valor de num em dec: " << dec << num << "\n";
	
	cout << "Valor de num em hex: " << setbase(16) << num << "\n";// setbase() define qualquer base
	
	cout.precision(24);// define o número de casas decimais // o ponto conta
	
	cout << "Valor de pi: " << pi << "\n";
	
	cout.precision(-1);// reseta o número de casas decimais
	
	cout << "Valor de pi: " << pi << "\n";
	
	cout << "Valor de pi: " << std::scientific << pi << "\n";// std::scientific para definir notação científica
	
	cout << "Valor de num: " << dec << setw(10) << num << "\n";
	
	cout << "Valor de num: " << setw(10) << setfill('0') << num << "\n";
	
	return 0;
}
