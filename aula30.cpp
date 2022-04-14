#include <iostream>
#include <queue> // INCLUIR BIBLIOTECA QUEUE PARA FILAS

using namespace std;

int main(){
	
	queue <string> carros; // DECLARAR FILA// COMANDO QUEUE <TIPO DE DADOS> NOME DA FILA;
	
	// USA OS MESMOS COMANDOS DE PILHAS, MAS COM FRONT E BACK NO LUGAR DE TOP
	
	// PUSH // ACRESCENTA UM ELEMENTO NA FILA
	// POP // RETIRA O PRIMEIRO ELEMENTO DA FILA
	// SIZE // CONTA O NUMERO DE ELEMENTOS NA FILA
	// EMPTY // VERIFICA SE A FILA ESTA VAZIA
	// FRONT // LE O PRIMEIRO ELEMENTO DA FILA
	// BACK // LE O ULTIMO ELEMENTO DA FILA
	
	carros.push("carro azul");
	carros.push("carro verde");
	carros.push("carro amarelo");
	carros.push("carro vermelho");
	
	cout << "Numero de carros na fila: " << carros.size() << "\n";
	cout << "Primeiro carro da fila: "<< carros.front() << "\n";
	
	carros.pop();
	cout << "Numero de carros na fila: " << carros.size() << "\n";
	cout << "Primeiro carro da fila: " << carros.front() << "\n";
	
	carros.pop();
	carros.pop();
	cout << "Numero de carros na fila: " << carros.size() << "\n";
	cout << "Primeiro carro da fila: " << carros.front() << "\n";
	
	carros.push("carro azul");
	carros.push("carro verde");
	carros.push("carro amarelo");
	
	cout << "Ultimo carro da fila: " << carros.back() << "\n";
	
	while(!carros.empty()){
		cout << "Primeiro carro da fila: " << carros.front() << "\n";
		carros.pop();
	}
	
	cout << "Numero de carros na fila: " << carros.size() << "\n";
	
	return 0;
}
