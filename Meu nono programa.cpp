#include <iostream>
using namespace std;
int main(){
	int num;
	int num1;
	int num2;
	
	/* OPERADORES:
	and=&& 'e'
	or=|| 'ou'
	not=! 'negativo'
	*/
	
	num=13;
	num1=1;
	num2=0;
	
	if (num>=3 && num<=14){
		cout << "\n\nValor ACEITO";
	}else{
		cout << "\n\nValor NAO ACEITO";
	}
	
	if (num<3 || num>7){
		cout << "\n\nValor ACEITO";
	}else{
		cout << "\n\nValor NAO ACEITO";
	}
	
	if ( (num>=4 && num<=12) || (num>15 && num<20) ){
		cout << "\n\nValor ACEITO";
	}else{
		cout << "\n\nValor NAO ACEITO";
	}
	
	if (num1){
		cout << "\n\nVou ao parque";
	}else{
		cout << "\n\nVou ao centro";
	}
	
	if (!num1){
		cout << "\n\nVou ao parque";
	}else{
		cout << "\n\nVou ao centro";
	}
	
	if (num2){
		cout << "\n\nLavar roupas";
	}else{
		cout << "\n\nArrumar quarto";
	}
	
	if (!num2){
		cout << "\n\nLavar roupas";
	}else{
		cout << "\n\nArrumar quarto";
	}
	
	return 0;
}
