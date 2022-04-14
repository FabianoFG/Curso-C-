#include <iostream>

using namespace std;

int main(){
	
	string veiculo="carro";
	string *pv;
	
	pv=&veiculo;//PONTEIRO PV RECEBE O ENDEREÇO DA VARIÁVEL VEICULO
	
	cout << veiculo << "\n" << &veiculo << "\n";
	
	cout << pv << "\n";
	
	*pv="moto";// NO ENDEREÇO INDICADO POR *PV ADICIONE O VALOR "MOTO"
	
	cout << veiculo << "\n" << *pv;
	
	return 0;
}
