//cabe�alho para arquivo de cabe�alho
#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
	public:
		int vel=0;
		int velmax;
		std::string tipo;
		//declara��o de m�todos
		Aviao(int tp);//m�todo construtor n�o usa tipo de dados // usa o nome da pr�pria classe no lugar
		void imprimir();
	
	private:
};

Aviao::Aviao(int tp){//1=jato, 2=monomotor, 3=planador
	if(tp==1){
		tipo="jato";
		velmax=800;
	}else if(tp==2){
		tipo="monomotor";
		velmax=350;
	}else if(tp==3){
		tipo="planador";
		velmax=180;
	}
}

void Aviao::imprimir(){
	std::cout << "Tipo...............: " << tipo << std::endl;
	std::cout << "Velociade maxima...: " << velmax << std::endl;
	std::cout << "Velocidade atual...: " << vel << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	
}



#endif // AVIAO_H_INCLUDED

