#include <iostream>

using namespace std;

class Aviao{ //nova classe de objetos

	public://tipo de objeto público
		//propriedades do objeto
		int vel=0;
		int velmax;
		string tipo;
		//método para objetos prototipagem
		void ini(int tp);//tipo_dados_retorno nome_metodo(parametro)
	
	private://tipo de objeto provado
};

//função do método
void Aviao::ini(int tp){//1=jato, 2=monomotor, 3=planador
	if(tp==1){
		this->velmax=800;
		this->tipo="jato";
	}else if(tp==2){
		this->velmax=400;
		this->tipo="monomotor";
	}else if(tp==3){
		this->velmax=180;
		this->tipo="planador";
	}
}


int main(){
	//inicializando objetos
	Aviao *av1=new Aviao();
	Aviao *av2=new Aviao();
	//atribuindo valores às propriedades do objeto
	av1->ini(3);
	av2->ini(1);
	
	cout << av1->velmax << "\n" << av2->velmax << "\n";
		
	return 0;
}
