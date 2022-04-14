#include <iostream>

using namespace std;

class Peca_jogo{ 

	public:
		//propriedades do objeto
		int p_dano;
		int ataque;
		int defesa;
		int vel=0;
		int velmax;
		int modo_des;//0=imóvel, 1=peão, 2=montaria, 3=rodas, 4=arrasto
		int tipo;//0=edifício,1=peão, 2=cavaleiro, 3=carroça, 4=Bloco
		string tipo_nome;
		//método para objetos prototipagem
		void ini(int tp);//criação de nova peça de jogo
	
	private:
};

//função do método
void Peca_jogo::ini(int tp){
	if(tp==0){
		this->p_dano=1000;
		this->ataque=0;
		this->defesa=10;
		this->velmax=0;
		this->modo_des=0;
		this->tipo=0;
		this->tipo_nome="Edificio";
	}else if(tp==1){
		this->p_dano=50;
		this->ataque=7;
		this->defesa=2;
		this->velmax=10;
		this->modo_des=1;
		this->tipo=1;
		this->tipo_nome="Peao";
	}else if(tp==2){
		this->p_dano=200;
		this->ataque=15;
		this->defesa=5;
		this->velmax=20;
		this->modo_des=2;
		this->tipo=2;
		this->tipo_nome="Cavaleiro";
	}else if(tp==3){
		this->p_dano=150;
		this->ataque=0;
		this->defesa=1;
		this->velmax=15;
		this->modo_des=3;
		this->tipo=3;
		this->tipo_nome="Carroca";
	}else if(tp==4){
		this->p_dano=1000;
		this->ataque=0;
		this->defesa=5;
		this->velmax=1;
		this->modo_des=4;
		this->tipo=4;
		this->tipo_nome="Bloco";
	}
}


int main(){
	//inicializando objetos
	Peca_jogo *pj1=new Peca_jogo();
	Peca_jogo *pj2=new Peca_jogo();
	//atribuindo valores às propriedades do objeto
	pj1->ini(3);
	pj2->ini(1);
	
	cout << av1->velmax << "\n" << av2->velmax << "\n";
		
	return 0;
}
