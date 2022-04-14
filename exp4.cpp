#include <iostream>
using namespace std;
int main(){
	
	for(bool rep=1; rep==1;){
		
		char palavra_exibida[20];
		char palavra_oculta[20];
		int chances;
		int numero_letras;
		char chute;
		bool acerto;
		char letras_erradas[6];
		int erros;
		int n;
				
		for(n=0; n<20; n++){
			palavra_exibida[n]='*';
			palavra_oculta[n]='*';
		}
		
		for(n=0; n<6; n++){
			letras_erradas[n]='*';
		}
		chances=6;
		numero_letras=-1;
		acerto=0;
		erros=0;
		n=0;
		
		cout << "Digite uma palavra: "; cin >> palavra_oculta;
		
		for(n=0; n<20; n++){
			if(palavra_oculta[n]!='*'){
				numero_letras++;
			}
		}
		
		for(n=0; n<numero_letras; n++){
			palavra_exibida[n]='-';
		}
		
	while(chances>0 && (acerto!=numero_letras)){
		
		
			
		cout << "\n\nChances: " << chances << "\nNumero de letras: " << numero_letras;
				
		cout << "\nPalavra secreta: ";
		
		for(n=0; n<numero_letras; n++){
			cout << palavra_exibida[n];
		}
		cout << "\n";
		
		cout << "Chute uma letras: "; cin >> chute;
	
		for(n=0; n<numero_letras; n++){
			if(chute==palavra_oculta[n]){
				acerto=1;
				palavra_exibida[n]=palavra_oculta[n];
			}
		}
		
		switch(acerto){
			case 1:
				cout << "\nVOCE ACERTOU!\n";
				acerto++;
				break;
			case 0:
				cout << "\nVOCE ERROU!\n";
				chances--;
				erros++;
				letras_erradas[n]=chute;
		}
		
		cout << "\nLetras erradas: ";	
		for(n=0; n<6; n++){
			if(letras_erradas[n]!='*'){
				cout << letras_erradas[n] << " ";
			}
		}
		
	}
	cout << "\nRepetir? [sim=1 / nao=0]: "; cin >> rep;
	}
	return 0;
}
