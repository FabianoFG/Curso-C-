#include <iostream>
#include <stdio.h>//BIBLIOTECA PARA PRINTF E ACANF

using namespace std;

int main(){
	//Pintf e scanf são comandos obsoletos
	
	int num1, num2, num3;
	
	num1=1; num2=2; num3=3;
	
	printf("aula 41\nCurso de C++\0A partir daqui nao escreve");// Digitar \0 para parar de imprimir
	
	printf("\nValor da variavel num1: %d", num1);
	
	printf("\nValor das variaveis: %d %d %d", num1, num2, num3);
	
	printf("\nDigite o valor de num1: ");
	
	scanf("%d", &num1);
	
	printf("\nValor de num1: %d", num1);
	
	return 0;
}

/*
d,i => int
x,X => hexadecimal
u   => int sem sinal
s   => string, char*
f   => double
p   => ponteiros
*/
