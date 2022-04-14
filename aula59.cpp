#include <iostream>
#include <vector>

using namespace std;

int main(){//fun��es l�mbda

	//declara��o // [](){} // [captura de vari�veis](argumentos)->tipo de retirno{corpo da fun��o}
	auto maior=[](int n1, int n2)->int{
		return (n1>n2)?n1:n2;
	};
	
	cout << maior(8,6) << endl;
	
	//declara��o para vector como par�metro // possibilita insserir quantos valores forem desejados
	auto maior2=[](vector<int>n)->int{
		auto m=0;
		for(int x:n){
			m=(m>x)?m:x;
		}
		return m;
	};
	
	cout << maior2({12,34,87,43,56,98,43,54,76,32,76,34,67,23}) << endl;
	
	int x1,x2,x3,x4;
	x1=10;x2=43;x3=56;x4=39;
	
	//declara��o com captura de vari�veis// [=] captura todas as vari�veis do escopo
	auto soma=[x1,x2,x3,x4](){
		return x1+x2+x3+x4;
	};
	
	cout << soma() << endl;
	
	auto soma2=[=](vector<int>n)->int{
		auto m=0;
		for(int x:n){
			m=(m>x)?m:x;
		}
		return m+x1+x2+x3+x4;
	};
	
	cout << soma2({23,12,34,65,32,87,34,87,76}) << endl;
	
	auto soma3=[](vector<int>n)->int{
		auto s=0;
		for(int x:n){
			s+=x;
		}
		return s;
	};
	
	cout << soma3({23,12,34,65,32,87,34,87,76}) << endl;
	
	return 0;
}
