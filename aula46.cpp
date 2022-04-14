#include <iostream>
#include "classes.h"

using namespace std;

int main(){
	
	Veiculo *v1=new Veiculo(1);
	Veiculo *v2=new Veiculo(2);
	Veiculo *v3=new Veiculo(3);
	v1->vel=250;// alterar propriedade de objeto	
	cout << v1->getvelmax() << endl;
	cout << v2->getvelmax() << endl;
	cout << v3->getvelmax() << endl;
	
	v1->setligado(1);
	v2->setligado(0);
	v3->setligado(1);
	
	if(v1->getligado()==1){
		cout << "O veiculo 1 esta ligado\n";
	}else if(v1->getligado()==0){
		cout << "O veiculo 1 esta desligado\n";
	}
	
	if(v2->getligado()==1){
		cout << "O veiculo 2 esta ligado\n";
	}else if(v2->getligado()==0){
		cout << "O veiculo 2 esta desligado\n";
	}
	
	if(v3->getligado()==1){
		cout << "O veiculo 3 esta ligado\n";
	}else if(v3->getligado()==0){
		cout << "O veiculo 3 esta desligado\n";
	}
		
	return 0;
}
