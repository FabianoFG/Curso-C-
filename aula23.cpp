#include <iostream>

using namespace std;

void soma1();
void soma1(int n1, int n2);

int main(){
	//SOBRECARGA DE FUNÇÃO: PODE-SE USAR O MESMO NOME EM FUNÇÕES DIFERENTES, QUANDO ESTAS USAM ARGUMENTOS DIFERENTES
	soma1();
	soma1(30,40);
	
	return 0;
}

void soma1(){
	int n1,n2,res;
	n1=10;
	n2=20;
	res=n1+n2;
	
	cout << "\nA soma de " << n1 << " com " << n2 << " e igual a " << res;
}

void soma1(int n1, int n2){
	int res;
	res=n1+n2;
	
	cout << "\nA soma de " << n1 << " com " << n2 << " e igual a " << res;
}
