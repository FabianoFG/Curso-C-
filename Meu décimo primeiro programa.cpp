#include <iostream>
using namespace std;
int main(){
	int val;

	cout << "\nSelecione uma cor: \n";
	cout << "[1] Amarelo\n" << "[2] Verde\n" << "[3] Azul\n\n";
	cin >> val;
	
	switch(val){
		case 1:
			cout << "\nVoce escolheu a cor amarela\n";
			break;
		case 2:
			cout << "\nVoce escolheu a cor verde\n";
			break;
		case 3:
			cout << "\nVoce escolheu a cor azul\n";
			break;
		default:
			cout << "\nValor selecionado invalido\n";
		}
	
	cout << "\nSelecione um meio de transporte: \n";
	cout << "[1] Carro\n" << "[2] Motocicleta\n" << "[3] Aviao\n" << "[4] Helicoptero\n\n";
	cin >> val;
	
	switch(val){
		case 1:
		case 2:
			cout << "\nVoce escolheu transporte terrestre: ";
			switch(val){
				case 1:
				cout << "Carro\n";
				break;
			case 2:
				cout << "Motocicleta\n";
				break;
			}
		break;
		
		case 3:
		case 4:
			cout << "\nVoce escolheu transporte aereo: ";
			switch(val){
				case 3:
					cout << "Aviao\n";
					break;
				case 4:
					cout << "Helicoptero\n";
					break;
			}
		break;
		}
		
	cout << "\nPrograma finalizado\n";
	
	return 0;
}
