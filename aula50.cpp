#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	//ofstream // tipo de saída
	//ifstream // tipo de entrada
	//fstream // pode ser configurado como entrada ou saída
	
	ofstream arquivo;
	
	arquivo.open("aula50.txt",ios::app);// cria um arquivo do tipo txt // ios::app permite que mais texto seja adicionado, em vez de sobrescrito, a cada execução
	
	arquivo << "aula50\n"; // escreve no arquivo
	arquivo << "aula50\n"; 
	arquivo << "aula50\n"; 
	arquivo << "aula50\n"; 
	
	arquivo.close();// sempre fechar o arquivo depois de usar // para poupar memória
	
	return 0;
}
