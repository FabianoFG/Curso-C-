#include <iostream>
#include <stdio.h>//para fun��o gets
#include <stdlib.h>//para fun��o malloc

using namespace std;

int main(){
	
	//char vnome[50]; // aloca mais espa�o do que precisa caso seja maior que o input e pode causar erros de for menor que o input
	char *vnome; // *vnome como ponteiro
	
	//aloca��o din�mica de mem�ria ( usando comando malloc)
	vnome=(char *)malloc(1+sizeof(char));// fun��o malloc otimiza o uso de mem�ria // fun��o malloc retorna void // (char *) "typecast" converte void em
	// ponteiro tipo char // (sizeof()) indica o tamanho do tipo char // (1+) reserva um char a mais para finalizador /0
	// nome_variavel=(typecast)malloc(tamanho do tipo de dados); 
	
	//cin >> vnome;
	gets(vnome);
	
	cout << vnome;
	
	return 0;
}
