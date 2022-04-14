#include <iostream>
#include <ctime> //time.h
#include <cmath>//math.h

using namespace std;

int numeros_primos(int n){
	int i,j;
	int freq=n-1;
	for(i=2;i<=n;++i){
		for(j=sqrt(i);j>1;--j){
			if(i%j==0){
				--freq;
				break;
			}
		}
	}
	return freq;
}

int main(){
	int primos;
	clock_t t1,t2,t3;//tipo clock_t
	t1=clock();
	primos=numeros_primos(999);
	t2=clock();
	t3=difftime(t2,t1);
	
	cout << "Quantidade de primos: " << primos << endl;
	cout << "Tempo de CPU: " << ((float)t3)/CLOCKS_PER_SEC << " segundos" << endl;
	
	//função time / tipo time_t
	time_t tp;
	time(&tp);
	cout << tp << " segundos desde 1 de janeiro de 1970" << endl;
	
	//struct tm
	struct tm * InfoTempo;
	time(&tp);
	InfoTempo=localtime(&tp);// converte para formato data/hora
	cout << asctime(InfoTempo) << endl;// converte para string
	cout << InfoTempo->tm_hour << endl;// para selecionar variável específica
	
	//função ctime
	cout << ctime(&tp) << endl;// mais simples de usar que asctime // não usa struct tm
	
	//formatar data e hora // olhar tabela
	char tempo[80];
	strftime(tempo,80,"%d/%m/%Y %I:%M:%S",InfoTempo);
	cout << "Data e hora: " << tempo << endl;
		
	return 0;
}
