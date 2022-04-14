#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
	string nome;
	int idade;
};

class Veiculo{
	public:
		int tipo;
		string nome;
};

int main(){
	//método de inicialização uniforme // inicializar os valores entre chaves {} // adicionar a comando (flag) -std=c++11 na incicialização do compilador
	int num{10};
	string nome{"Fabiano"};
	//
	int vetor[]{1,2,3,4,5,6,7,8,9};
	vector<int>valores{1,2,3,4,5};
	map<string,string>capitais{{"MG","Belo Horizonte"}};
	Pessoa p1{"Fabiano",28};
	Veiculo v1{1,"Carango"};
			
	cout << num << "\n" << nome << "\n";	
	
	return 0;
}
