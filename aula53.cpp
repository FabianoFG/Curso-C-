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
	//avan�ando o iterator para uma determinada ordem// advance(nome do iterator, n�meor a somar);		
	advance(it,1);
	//sinalizar o iterator como ponteiro
	cout << *it << endl;
	// *next para indicar determinada posi��o seguinte ao valor do iterator (n�o altera o valor atual do iterator)
	cout << *next(it,2) << endl;
	
	advance(it,1);
	// *prev para indicar determinada posi��o anterior ao valor do iterator (n�o altera o valor atual do iterator)
	cout << *prev(it,2) << endl;
	// posicionar o iterator no end facilita o uso do prev
	it=produtos.end();
	
	cout << *prev(it,5) << endl;
	
	for(it=produtos.begin();it!=produtos.end();it++){ 
		cout << *it << endl;
	}
	// O iterator pode ser declarado no pr�prio for() // ex: 
	// for(vector<string>::iterator it=produtos.begin();it!=produtos.end();it++){ 
	//	 cout << *it << endl;
	// }
	
	
	
	return 0;
}
