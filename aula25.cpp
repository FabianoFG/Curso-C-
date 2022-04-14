#include <iostream>

using namespace std;

void contador(int numero, int contagem=0);
int fatorial(int n, int produto=1, int contador=1);
int fibonacci(int n, int a=0, int b=1, int c=0, int contador=3);

int main(){
	
	contador(0); cout << "\n";
	cout << "Fatorial " << fatorial(8) << "\n";
	cout << "Fibonacci " << fibonacci(17) << "\n";
	
	
	
	return 0;
}

void contador(int numero, int contagem){
	cout << contagem << "\n";
	if(numero>contagem){
		contador(numero, ++contagem);
		
	}
	
}

//FATORIAL

int fatorial(int n, int produto, int contador){
	produto=produto*contador;
	if(contador<n){
		fatorial(n, produto, ++contador);
	}else if(contador==n){
		return produto;
	}else if(n==0){
		return 1;
	}
	
}

//FATORIAL COM LAÇO FOR
/*void fatorial2(int n){
	int res=1;
	for(int k=1; k<=n; k++){
		res=res*(k);
		cout << res << "\n";
	}
}*/

int fibonacci(int n, int a, int b, int c, int contador){//a E b SÃO OS DOIS PRIMEROS TERMOS/ n É UM NÚERO QUALQUER DA SEQUÊNCIA
	c=a+b;a=b;b=c;
		
	if(contador<n){
		fibonacci(n, a, b, c, ++contador);
	}else if(contador==n){
		return c;
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

