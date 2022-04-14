#include <iostream>
using namespace std;
int main(){
	//INÍCIO DO JOGO
	bool rep=1;
	for(rep=1; rep==1;){
		
		cout << "          JOGO DA FORCA\n\n";
		//DECLARAÇÃO E INICIALIZAÇÃO DE VARIÁVEIS
		char palavra_exibida[20];
		char palavra_oculta[20];
		int chances=6;
		int numero_letras=-1;
		char chute;
		int acerto=0;
		char letras_erradas[6];
		int erros=0;
		int n=0;
		int letras_corretas=0;
		
		for(n=0; n<20; n++){
			palavra_oculta[n]='*';
		}
		for(n=0; n<6; n++){
			letras_erradas[n]='_';
		}
	
		//INPUT PALAVRA OCULTA	
		cout << "Digite uma palavra: "; cin >> palavra_oculta;
		//CONTAGEM PALAVRA OCULTA
		for(n=0; n<20; n++){
			if(palavra_oculta[n]!='*'){
				numero_letras++;
			}
		}
		for(n=0; n<numero_letras; n++){
			palavra_exibida[n]='_';
		}
				
	//CICLO DE JOGO		
	while(chances>0 && (letras_corretas!=numero_letras)){
		
		system("cls");
		
		//TELA DO JOGO
		cout << "          JOGO DA FORCA";
		cout << "\n\nChances: " << chances << "\nNumero de letras: " << numero_letras << "\nPalavra secreta: ";
						
		for(n=0; n<numero_letras; n++){
			cout << palavra_exibida[n] << " ";
		}
				
		cout << "\nLetras erradas: ";	
		for(n=0; n<6; n++){
			cout << letras_erradas[n] << " ";
		}
				
		cout << "\nChute uma letras: "; cin >> chute;
		
		//VERIFICAÇÃO DO CHUTE
		for(n=0; n<numero_letras; n++){
			if(chute==palavra_exibida[n]){
				acerto=2;
				
			}else if(chute==palavra_oculta[n]){
				acerto=1;
				letras_corretas++;
				palavra_exibida[n]=palavra_oculta[n];
					
			}
		}
		switch(acerto){
			case 0:
				cout << "\nVOCE ERROU!\n";
				chances--;
				letras_erradas[erros]=chute;
				erros++;
				break;
			case 1:
				cout << "\nVOCE ACERTOU!\n";
				acerto=0;
				break;
			case 2:
				cout << "\nPALAVRA REPETIDA!";
				acerto=0;
				
		}
		if(letras_corretas==numero_letras){
			cout << "\nPARABENS! VOCE VENCEU!\n";
			cout << "\nRepetir? [sim=1 / nao=0]: "; cin >> rep;
		}else if(chances==0){
			cout << "\nQUE PENA! VOCE PERDEU.\n";
			cout << "\nRepetir? [sim=1 / nao=0]: "; cin >> rep;			
		}
		system("pause");
	}
	system("cls");
	
	}
	return 0;
}
	
	

	

