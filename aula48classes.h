#ifndef AULA48CLASSES_H_INCLUDED
#define AULA48CLASSES_H_INCLUDED

class Base1{
	public:
	void impBase1();
};

void Base1::impBase1(){
	std::cout << "Imprimir classe base 1" << std::endl;
}

class Base2{
	public:
	void impBase2();
};

void Base2::impBase2(){
	std::cout << "Imprimir classe base 2" << std::endl;
}

class Herd:public Base1, public Base2{
};
	


#endif// AULA48CLASSES_H_INCLUDED
