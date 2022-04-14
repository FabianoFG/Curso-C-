#ifndef CLASSES2_H_INCLUDED
#define CLASSES2_H_INCLUDED

class Veiculo{
	
	public:
		int vel;
		int blind;
		int rodas;
		void settipo(int tp);
		void setvelmax(int vm);
		void setarma(bool ar);
		void imp();
		
	private:
		int tipo;//1=moto, 2=carro, 3=caminhão, 4=tanque de guerra
		int velmax;
		bool arma;
		
};

void Veiculo::settipo(int tp){
	tipo=tp;
}

void Veiculo::setvelmax(int vm){
	velmax=vm;
}

void Veiculo::setarma(bool ar){
	arma=ar;
}

void Veiculo::imp(){
	std::cout << "Tipo do veiculo.......: " << tipo << std::endl; 
	std::cout << "Velocidade maxima.....: " << velmax << std::endl;
	std::cout << "Quantidade de rodas...: " << rodas << std::endl;
	std::cout << "Blindagem.............: " << blind << std::endl;
	std::cout << "Armamento.............: " << arma << std::endl;
	std::cout << "---------------------------" << std::endl;
}


class Moto:public Veiculo{
	public:
		Moto();
};

Moto::Moto(){
	vel=0;
	blind=0;
	rodas=2;
	settipo(1);
	setvelmax(120);
	setarma(false);
		
}

class Carro:public Veiculo{
	public:
		Carro();
};

Carro::Carro(){
	vel=0;
	blind=0;
	rodas=4;
	settipo(2);
	setvelmax(180);
	setarma(false);
}

class Tanque:public Veiculo{
	public:
		Tanque();
};

Tanque::Tanque(){
	vel=0;
	blind=1;
	rodas=8;
	settipo(4);
	setvelmax(100);
	setarma(true);
}

#endif// CLASSES2_H_INCLUDED
