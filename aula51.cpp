#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	//ofstream // tipo de saída
	//ifstream // tipo de entrada
	//fstream // pode ser configurado como entrada ou saída
	
	/*ofstream arquivoO;
	
	arquivoO.open("aula51.txt",ios::app);// cria um arquivo do tipo txt // ios::app permite que mais texto seja adicionado, em vez de sobrescrito, a cada execução
	//arquivoO.open("aula51.txt",ios::out); // adiciona-se ios::out caso o arquivo ainda não tenha sido criado
	
	arquivoO << "aula51\n"; // escreve no arquivo
	arquivoO << "aula51\n"; 
	arquivoO << "aula51\n"; 
	arquivoO << "aula51\n"; 
	
	arquivoO.close();// sempre fechar o arquivo depois de usar // para poupar memória
	*/
	ifstream arquivoI;
	
	string linha;
	
	arquivoI.open("aula51.txt");//arquivoI.open("aula51.txt",ios::in); // adiciona-se ios::in caso o arquivo ainda não tenha sido criado
	
	if(arquivoI.is_open()){
		while(getline(arquivoI,linha)){
			cout << linha << endl;
		}
		arquivoI.close();
	}else{
		cout << "Nao foi possivel encontrar o arquivo especificado" << endl;
	}
	
	//ios::in  //ios::out para criar arquivos no mesmo método opem(linhas 14 e 18)
	
	return 0;
}
