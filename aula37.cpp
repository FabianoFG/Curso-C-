#include <iostream>

using namespace std;

int main(){
	
	int *p;
	int vetor[10];
	
	p=&vetor[0];//P=VETOR;
	
	cout << "\n" << p << "\n";
	
	p=&vetor[1];
	
	cout << "\n" << p << "\n";
	
	p=&vetor[2];//OU *(P+1);
	
	cout << "\n" << p << "\n";
	
	p=&vetor[3];//OU *(P+1); 
	
	cout << "\n" << p << "\n";
	
	*p=30;// *p indica a posição armazenada no ponteiro (30) // O MESMO QUE vetor[3]=30;
	
	cout << "\n" << vetor[3] << "\n";
	
	return 0;
}
