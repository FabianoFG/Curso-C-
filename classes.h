#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
	
	public:// par�metros p�blicos podem ser modificados de outro programa
		int vel;
		int tipo;
		Veiculo(int tp);
		int getvelmax(); // "get" para obter valores de vari�veis privadas
		bool getligado();
		void setligado(int l);
				
	private:// par�metros privados s� podem ser alterados por m�todos
		void setvelmax(int vm); // "set" para atribuir valores a vari�veis privadas
		std::string nome;
		bool ligado;
		int velmax;
		
};

Veiculo::Veiculo(int tp){//1=carro, 2=avi�o, 3=navio
	tipo=tp;
	
	if(tipo==1){
		nome="Carro";
		setvelmax(200);// pode ser usado m�tododo set // mas tamb�m pode ser usada a sintaxe variavel=valor(como na aula anterior)
		setligado(0);
	}else if(tipo==2){
		nome="Aviao";
		setvelmax(800);
		setligado(0);
	}else if(tipo==3){
		nome="Navio";
		setvelmax(120);
		setligado(0);
	}
	
}

void Veiculo::setvelmax(int vm){
	velmax=vm;
}

int Veiculo::getvelmax(){
	return velmax;
}

bool Veiculo::getligado(){
	return ligado;
}

void Veiculo::setligado(int l){
	if(l==1){
		ligado=true;
	}else if(l==0){
		ligado=false;
	}
}

#endif // CLASSES_H_INCLUDED
