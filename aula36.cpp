#include <iostream>

using namespace std;

int main(){
	
	string veiculo="carro";
	string *pv;
	
	pv=&veiculo;//PONTEIRO PV RECEBE O ENDERE�O DA VARI�VEL VEICULO
	
	cout << veiculo << "\n" << &veiculo << "\n";
	
	cout << pv << "\n";
	
	*pv="moto";// NO ENDERE�O INDICADO POR *PV ADICIONE O VALOR "MOTO"
	
	cout << veiculo << "\n" << *pv;
	
	return 0;
}
