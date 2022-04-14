#include <iostream>
#include <list>

using namespace std;

int main(){
	
	list <int> aula;//SINTAXE LISTA// COMANDO LIST <TIPO DE DADO> NOME DA LISTA;
	int tam;//VARÁVEL DE TAMANHO DA LISTA
	list <int>:: iterator it;//ITERATOR USADO PARA FAZER INSERÇÕES EM POSIÇÕES QUAISQUER
	list <int> teste(5,9);
	
	/*MÉTODOS
	PUSH_FRONT // INSERE VALOR NO COMEÇO DA LISTA
	PUSH_BACK // INSERE VALOR NO FINAL DA LISTA
	POP_FRONT // REMOVE VALOR DO COMÇO DA LISTA
	POP_BACK // REMOVE VALOR DO FINAL DA LISTA
	FRONT // LÊ O PRIMEIRO VALOR DA LISTA
	BACK // LÊ O ÚLTIMO VALOR DA LISTA
	BEGIN // INDICA O INÍCIO DO ITERATOR
	INSERT // INSERE VALOR EM UMA DETERMINADA POSIÇÃO // NECESSITA DE ITERATOR
	ERASE // APAGA UM VALOR ESPECÍFICO DA LISTA // NECESSITA DE ITERATOR
	SIZE // INDICA O NÚMERO DE TERMOS DA LISTA
	SORT // ORDENA OS VALORES DA LISTA // ORDEM CRESCENTE OU DECRESCENTE
	REVERSE // REVERTE A ORDEM DOS VALORES DA LISTA
	MERGE // MESCLA DUAS LISTAS
	EMPTY // VERIFICA SE A LISTA ESTÁ VAZIA
	CLEAR // APAGA TODOS OS VALORES DA LISTA
	*/
	
	//PREENCHIMENTO DA LISTA
	tam=10;
	for(int i=0; i<tam; i++){
		aula.push_front(i);
	}
	
	//INSERÇÃO DE VALORES EM UMA POSIÇÃO QUALQUER
	it=aula.begin();//POSIÇÃO DE INÍCIO DO ITERATOR
	advance(it,7);// AVANÇAR ITERATOR ATÉ A POSIÇÃO
	aula.insert(it,0);// INSERÇÃO
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	//LEITURA E ESVAZIAMENTO DA LISTA
	tam=aula.size();
	for(int i=0; i<tam; i++){
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	//INSERÇÃO MANUAL DE VALORES
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
	
	//INSERÇÃO DE VALORES EM UMA POSIÇÃO QUALQUER
	it=aula.begin();//POSIÇÃO DE INÍCIO DO ITERATOR
	advance(it,7);// AVANÇAR ITERATOR ATÉ A POSIÇÃO
	aula.insert(it,0);// INSERÇÃO
	
	//REMOÇÃO DE VALORES EM UMA POSIÇÃO QUALQUER
	aula.erase(--it);
	
	//REMOÇÃO DE TODOS OS VALORES DA LISTA
	aula.clear();
	
	//MESCLAR DUAS LESTAS
	aula.merge(teste);
	
	//ORDENAÇÃO E REVERSÃO 
	aula.sort();//ORDENAÇÃO DE VALORES DA LISTA
	aula.reverse();//INVERSÃO DE ORDEM// MAIOR>MENOR, MENOR>MAIOR
	
	//LEITURA E ESVAZIAMENTO DA LISTA
	tam=aula.size();
	for(int i=0; i<tam; i++){
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	
	return 0;
}
