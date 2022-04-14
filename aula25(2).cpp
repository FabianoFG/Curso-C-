#include <iostream>

using namespace std;

void contador(int numero, int contagem=0);
void fatorial(int n, int k=0);

int main(){
	int res=1;
	contador(75);
	cout << fatorial(4) << "\n";

	return 0;
}

void contador(int numero, int contagem){
	cout << contagem << "\n";
	if(numero>contagem){
		contador(numero, ++contagem);
		
	}
	
}

int fatorial(int n, int k){
	return (n-k)*fatorial(n,k);
	if(n>k){
		fatorial(n,k);
	}
}

