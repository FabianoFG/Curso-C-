#include <iostream>
#include <vector>

using namespace std;

int main(){
	//declarando os vectors // vector <tipo de dados> nome;
	vector <int> num1;
	vector <int> num2;
	int tam1, tam2, i;
	//inicializando posições nos vectors
	num1.push_back(0);
	num1.push_back(1);
	num1.push_back(2);
	num1.push_back(3);
	num1.push_back(4);
	
	num2.push_back(5);
	num2.push_back(6);
	num2.push_back(7);
	num2.push_back(8);
	num2.push_back(9);
	
	num2[2]=7;//sintaxe só é válida se a posição já tiver sido inicializada
	
	tam1=num1.size();
	
	cout << "\nTamanho do vector num1: " << tam1 << "\n";
	
	// rotina para impressão dos valores // i<num1.size() também seria válido
	for(i=0; i<tam1; i++){ 
		cout << num1[i] << " ";
	}
	
	tam2=num2.size();
	
	cout << "\nTamanho do vector num2: " << tam2 << "\n";
	
	for(i=0; i<tam2; i++){
		cout << num2[i] << " ";
	}
	
	num1.swap(num2);
	
	cout << "\n";
	
	for(i=0; i<tam1; i++){ 
		cout << num1[i] << " ";
	}
	
	cout << "\nPrimeiro valor de num1.....:" << num1.front() << "\n";
	cout << "Ultimo valor de num1.......:" << num1.back() << "\n";
	cout << "Valor do meio de num1......:" << num1.at(tam1/2) << "\n";
	
	num1.insert(num1.begin()+2, 99);
	
	cout << "\n";
	
	for(i=0; i<tam1; i++){ 
		cout << num1[i] << " ";
	}
	
	
	num1.erase(num1.begin()+2);
	
	cout << "\n";
	
	for(i=0; i<tam1; i++){ 
		cout << num1[i] << " ";
	}
	
	while(!num1.empty()){
		num1.pop_back();
	}
	
	cout << "\nTamanho de num1: " << num1.size();
	
	return 0;
}
