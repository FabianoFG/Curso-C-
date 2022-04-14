#include <iostream>
#include <stack>//INCLUIR BIBLITECA PARA PILHAS (STACKS)

using namespace std;

int main(){
	//COMANDO STACK <TIPO DE DADOS> NOME DA PILHA;
	stack <string> cartas;
	//METODOS:
	//PUSH// PARA ADICIONAR ELEMENTO A UMA PILHA
	//POP// PARA REMOVER ELEMENTO A UMA PILHA
	//SIZE// PARA MEDIR O TAMANDO DE UMA PILHA
	//EMPTY// PARA VERIFICAR SE UMA PILHA ESTA VAZIA// TRUE PARA VAZIA E FALSE PARA NAO VAZIA
	//TOP// PARA LER O ELEMENTO DO TOPO DE UMA PILHA// NAO RETIRA, APENAS LE
	
	
	cartas.push("rei de paus");
	cartas.push("rei de copas");
	cartas.push("rei de espadas");
	cartas.push("rei de ouros");
	
	if(!cartas.empty()){
		cout << "Pilha de cartas possui elementos\n\n";
	}else{
		cout << "Pilha de cartas vazia\n\n";
	}
	
	cout << "Numero de cartas: " << cartas.size() << "\n";
	cartas.pop();
	cout << "Carta do topo: " << cartas.top() << "\n";
	cout << "Numero de cartas: " << cartas.size() << "\n";
	cartas.pop();
	cartas.pop();
	cout << "Carta do topo: " << cartas.top() << "\n";
	cout << "Numero de cartas: " << cartas.size() << "\n";
	cartas.pop();
	cout << "Numero de cartas: " << cartas.size() << "\n";
	
	if(!cartas.empty()){
		cout << "Pilha de cartas possui elementos\n\n";
	}else{
		cout << "Pilha de cartas vazia\n\n";
	}
	
	
	while(cartas.size()<4){
		cartas.push("uma carta qualquer");
		cout << "Numero de catas pilha: " << cartas.size() << "\n";
	}
	
	while(!cartas.empty()){
		cout << "Carta do topo: " << cartas.top() << "\n";
		cartas.pop();
	}
	
	return 0;
}


