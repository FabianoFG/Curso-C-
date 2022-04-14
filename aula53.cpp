#include <iostream>
#include <vector>

using namespace std;

int main(){
	//criando e inicializando vector
	vector<string>produtos={"mouse","teclado","monitor","gabinete","cx.som"};
	//criando iterator para o vector
	vector<string>::iterator it;
	//igualando o iterator ao primeiro elemento (0)
	it=produtos.begin();
	//avançando o iterator para uma determinada ordem// advance(nome do iterator, númeor a somar);		
	advance(it,1);
	//sinalizar o iterator como ponteiro
	cout << *it << endl;
	// *next para indicar determinada posição seguinte ao valor do iterator (não altera o valor atual do iterator)
	cout << *next(it,2) << endl;
	
	advance(it,1);
	// *prev para indicar determinada posição anterior ao valor do iterator (não altera o valor atual do iterator)
	cout << *prev(it,2) << endl;
	// posicionar o iterator no end facilita o uso do prev
	it=produtos.end();
	
	cout << *prev(it,5) << endl;
	
	for(it=produtos.begin();it!=produtos.end();it++){ 
		cout << *it << endl;
	}
	// O iterator pode ser declarado no próprio for() // ex: 
	// for(vector<string>::iterator it=produtos.begin();it!=produtos.end();it++){ 
	//	 cout << *it << endl;
	// }
	
	
	
	return 0;
}
