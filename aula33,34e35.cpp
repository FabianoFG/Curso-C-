#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int potencia;
	int velmax;
	int vel;
	
	void insere(string stnome, string stcor, int stpot, int stvelmax){
		nome=stnome;
		cor=stcor;
		potencia=stpot;
		velmax=stvelmax;
		vel=0;
	}
	
	void mostra(){
		cout << "\nNome:....................." << nome << "\n";
		cout << "Cor:......................" << cor << "\n";
		cout << "Potencia:................." << potencia << "\n";
		cout << "Velocidade maxima:........" << velmax << "\n";
		cout << "Velocidade atual:........." << vel << "\n";
	}
	
	void mudavel(int mv){
		vel=mv;
		if(mv>velmax){
			vel=velmax;
		}else if(mv<0){
			vel=0;
		}
	}
};

int main(){
	
	Carro car1;
	Carro car2;
	Carro car3, car4, car5, car6;
	
	car1.nome="Tornado";
	car1.cor="vermelho";
	car1.potencia=450;
	car1.velmax=300;
	
	car2.nome="Luxo";
	car2.cor="Preto";
	car2.potencia=250;
	car2.velmax=250;
	
	cout << "\nNome:....................." << car1.nome << "\n";
	cout << "Cor:......................" << car1.cor << "\n";
	cout << "Potencia:................ " << car1.potencia << "\n";
	cout << "Velocidade maxima:....... " << car1.velmax << "\n";
	
	cout << "\nNome:....................." << car2.nome << "\n";
	cout << "Cor:......................" << car2.cor << "\n";
	cout << "Potencia:................ " << car2.potencia << "\n";
	cout << "Velocidade maxima:....... " << car2.velmax << "\n";
	
	car3.insere("Exotico", "Turquesa", 350, 300);
	car4.insere("Classico", "Branco", 100, 190);
	
	car3.mostra();
	car3.mudavel(235);
	car3.mostra();
	
	//ARMAZENAR NOMES DOS CONJUNTOS DE DADOS EM FORMA VETOR // FACILITAR O USO DO STRUCT
	//CRIAR VETOR
	Carro *carros=new Carro[6];
	
	//ATRIBUIR OS NOMES DOS CONJUNTOS ÀS VARIÁVEIS DO VETOR
	carros[0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4; carros[4]=car5; carros[5]=car6;
	
	//INDICAR POSIÇÕES DO VETOR // NO LUGAR DO NOME // PERMITE USO DE LAÇO
	carros[0].insere("Tornado","Vermelho",450,300);
	carros[1].insere("Luxo","Preto",250,250);
	carros[2].insere("Exotico","Turquesa",350,300);
	carros[3].insere("Classico","Branco",100,190);
	carros[4].insere("Calhambeque","Ferrugem",80,100);
	carros[5].insere("Caminhoneta","Cinza",500,150);
	
	//USO DE LAÇO PARA EXECUTAR MÉTODO PARA TODOS OS CONJUNTOS
	for(int i=0; i<6; i++){
		carros[i].mostra();
	}
		
	return 0;
}
