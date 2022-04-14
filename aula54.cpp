#include <iostream>
#include <vector>
#include <stdexcept>

double divide(double,double);

using namespace std;

int main(){
	
	vector<int>num(5);
	
	try{
		num.at(5)=10;
		cout << num[5] << endl;
	}catch(exception& e){
		cout << "ERRO: " << e.what() << endl;
	}
	
	double n1,n2;
	
	cin >> n1 >> n2;
	
	try{
		cout << divide(n1,n2);
	}catch(const char* e){
		cout << "ERRO: " << e << endl;
	}
	
	return 0;
}

double divide(double n01, double n02){
	if(n02==0){
		throw "Erro de divisao por ZERO";
	}else if(n01>=10){
		throw "n01 precisa ser menor que 10";
	}
	return n01/n02;
}
