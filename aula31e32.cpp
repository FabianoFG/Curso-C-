#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list <int> aula;//SINTAXE LISTA// COMANDO LIST <TIPO DE DADO> NOME DA LISTA;
	int tam;//VAR�VEL DE TAMANHO DA LISTA
	list <int>:: iterator it;//ITERATOR USADO PARA FAZER INSER��ES EM POSI��ES QUAISQUER
	list <int> teste(5,9);
	
	/*M�TODOS
	PUSH_FRONT // INSERE VALOR NO COME�O DA LISTA
	PUSH_BACK // INSERE VALOR NO FINAL DA LISTA
	POP_FRONT // REMOVE VALOR DO COM�O DA LISTA
	POP_BACK // REMOVE VALOR DO FINAL DA LISTA
	FRONT // L� O PRIMEIRO VALOR DA LISTA
	BACK // L� O �LTIMO VALOR DA LISTA
	BEGIN // INDICA O IN�CIO DO ITERATOR
	INSERT // INSERE VALOR EM UMA DETERMINADA POSI��O // NECESSITA DE ITERATOR
	ERASE // APAGA UM VALOR ESPEC�FICO DA LISTA // NECESSITA DE ITERATOR
	SIZE // INDICA O N�MERO DE TERMOS DA LISTA
	SORT // ORDENA OS VALORES DA LISTA // ORDEM CRESCENTE OU DECRESCENTE
	REVERSE // REVERTE A ORDEM DOS VALORES DA LISTA
	MERGE // MESCLA DUAS LISTAS
	EMPTY // VERIFICA SE A LISTA EST� VAZIA
	CLEAR // APAGA TODOS OS VALORES DA LISTA
	*/
	
	//PREENCHIMENTO DA LISTA
	tam=10;
	for(int i=0; i<tam; i++){
		aula.push_front(i);
	}
	
	//INSER��O DE VALORES EM UMA POSI��O QUALQUER
	it=aula.begin();//POSI��O DE IN�CIO DO ITERATOR
	advance(it,7);// AVAN�AR ITERATOR AT� A POSI��O
	aula.insert(it,0);// INSER��O
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	//LEITURA E ESVAZIAMENTO DA LISTA
	tam=aula.size();
	for(int i=0; i<tam; i++){
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	//INSER��O MANUAL DE VALORES
	aula.push_front(5);
	aula.push_front(2);
	aula.push_front(8);
	aula.push_front(0);
	aula.push_front(9);
	aula.push_front(4);
	aula.push_front(1);
	aula.push_front(3);
	aula.push_front(6);
	aula.push_front(7);
	
	//INSER��O DE VALORES EM UMA POSI��O QUALQUER
	it=aula.begin();//POSI��O DE IN�CIO DO ITERATOR
	advance(it,7);// AVAN�AR ITERATOR AT� A POSI��O
	aula.insert(it,0);// INSER��O
	
	//REMO��O DE VALORES EM UMA POSI��O QUALQUER
	aula.erase(--it);
	
	//REMO��O DE TODOS OS VALORES DA LISTA
	aula.clear();
	
	//MESCLAR DUAS LESTAS
	aula.merge(teste);
	
	//ORDENA��O E REVERS�O 
	aula.sort();//ORDENA��O DE VALORES DA LISTA
	aula.reverse();//INVERS�O DE ORDEM// MAIOR>MENOR, MENOR>MAIOR
	
	//LEITURA E ESVAZIAMENTO DA LISTA
	tam=aula.size();
	for(int i=0; i<tam; i++){
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	
	return 0;
}
