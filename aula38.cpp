#include <iostream>

using namespace std;

void somar(float *var, float valor);
void ini_vetor(float *v);

int main(){
	
	float num=0;
	float vetor[5];
	
	cout << "\n" << num << "\n";
	
 	somar(&num,15);// COMO SE FOSSE var=num E valor=15
 	
 	cout << "\n" << num << "\n\n";
 	
 	ini_vetor(vetor);// QUANDO VETOR NÃO É NECESSÁRIO COLOCAR O ENDEREÇO (&)
 	
 	for(int i=0; i<5; i++){
 		cout << vetor[i] << "\n";
	 }
	
	return 0;
}

void somar(float *var, float valor){
	*var+=valor;
}

void ini_vetor(float *v){
	v[0]=1;
	v[1]=2;
	v[2]=3;
	v[3]=4;
	v[4]=5;
}
