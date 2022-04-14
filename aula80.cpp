#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

int main(){
	//tipos
	minutes m;
	seconds s(1);
	seconds s=m;
	hours
	miliseconds
	microseconds
	nanoseconds
	
	cout << s.count() << endl;
	
	seconds s(60);
	minutes m=duration_cast<minutes>(s); //conversão (cast) de segundos para minutos // usar função duration_cast<tipo desejado>(tipo a ser convertido);
	
	//classe system_clock
	using chrono::system_clock;//determinando uso de subnamespace
	duration<int,ratio<60*60*24>> um_dia(1);//declarando variável de tipo duration(vector)// usando tipos int e ratio(vector) // chamado um_dia
	
	system_clock::time_point hoje=system_clock::now();// declarando variável tipo time_point // nome hoje // inicializando com valor da função now()
	system_clock::time_point amanha=hoje+um_dia;// declarando variável tipo time_point // nome amanha // inicializando valor de operação de variáveis um_dia e hoje
	system_clock::time_point ontem=hoje-um_dia;// declarando variável tipo time_point // nome ontem // inicializando valor de operação de variáveis um_dia e hoje
	
	time_t tt;// declarando variável tipo time_t // nome tt
	
	tt=system_clock::to_time_t(hoje); // inicializando tt // usando valor determinado pela função to_time_t() // usando variável hoje como parâmetro
	cout << "Hoje: " << ctime(&tt) << endl;// imprimindo usando função ctime() // usando variável tt como parâmetro (como endereço) 
	
	tt=system_clock::to_time_t(amanha);
	cout << "Amanha: " << ctime(&tt) << endl;
	
	tt=system_clock::to_time_t(ontem);
	cout << "Ontem: " << ctime(&tt) << endl;
	
	//contagem de tempo com chrono
	steady_clock::time_point t1=steady_clock::now();//criar time_point e igualar a hora atual ( função now())
	cout << "Imprimindo 9000 estrelas: " << endl;
	for(int i=9;i<9000;i++){// atividade qualquer
		cout << "*";
	}
	cout << endl;
	steady_clock::time_point t2=steady_clock::now();//criar segundo time_point e igualar a hora atual( função now())
	duration<double> tempo=duration_cast<duration<double>>(t2-t1);// criar variável período (tipo vector duration) // igualar à diferença de time_ponit e converter
	cout << "Tempo de trabalho: " << tempo.count() << " segundos" << endl; // usar método .count()
			
	return 0;
}
