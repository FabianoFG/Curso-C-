#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
	
	fstream arquivo;//fstream admite a criação de arquivo para ambos in e out (usar o ios::in e o ios::out
	char opc='s';
	string nome,linha;
	
	arquivo.open("aula52.txt",ios::out|ios::app);
	
	while((opc=='s')or(opc=='S')){
		cout << "Digite um nome: ";
		cin >> nome;
		arquivo << nome << "\n";
		cout << "\nDigitar mais um nome?[s/n]" << "\n";
		cin >> opc;
		system("CLS");
	}
	
	arquivo.close();
	
	arquivo.open("aula52.txt",ios::in);
	
	cout << "Nomes digitados: " << endl;
			
	if(arquivo.is_open()){
		while(getline(arquivo,linha)){
			cout << linha << endl;
		}
		arquivo.close();
	}else{
		cout << "Nao foi possivel abrir o arquivo especificado" << endl;
	}
	
	
	
	return 0;
}
