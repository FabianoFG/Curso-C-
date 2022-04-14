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
	minutes m=duration_cast<minutes>(s); //convers�o (cast) de segundos para minutos // usar fun��o duration_cast<tipo desejado>(tipo a ser convertido);
	
	//classe system_clock
	using chrono::system_clock;//determinando uso de subnamespace
	duration<int,ratio<60*60*24>> um_dia(1);//declarando vari�vel de tipo duration(vector)// usando tipos int e ratio(vector) // chamado um_dia
	
	system_clock::time_point hoje=system_clock::now();// declarando vari�vel tipo time_point // nome hoje // inicializando com valor da fun��o now()
	system_clock::time_point amanha=hoje+um_dia;// declarando vari�vel tipo time_point // nome amanha // inicializando valor de opera��o de vari�veis um_dia e hoje
	system_clock::time_point ontem=hoje-um_dia;// declarando vari�vel tipo time_point // nome ontem // inicializando valor de opera��o de vari�veis um_dia e hoje
	
	time_t tt;// declarando vari�vel tipo time_t // nome tt
	
	tt=system_clock::to_time_t(hoje); // inicializando tt // usando valor determinado pela fun��o to_time_t() // usando vari�vel hoje como par�metro
	cout << "Hoje: " << ctime(&tt) << endl;// imprimindo usando fun��o ctime() // usando vari�vel tt como par�metro (como endere�o) 
	
	tt=system_clock::to_time_t(amanha);
	cout << "Amanha: " << ctime(&tt) << endl;
	
	tt=system_clock::to_time_t(ontem);
	cout << "Ontem: " << ctime(&tt) << endl;
	
	//contagem de tempo com chrono
	steady_clock::time_point t1=steady_clock::now();//criar time_point e igualar a hora atual ( fun��o now())
	cout << "Imprimindo 9000 estrelas: " << endl;
	for(int i=9;i<9000;i++){// atividade qualquer
		cout << "*";
	}
	cout << endl;
	steady_clock::time_point t2=steady_clock::now();//criar segundo time_point e igualar a hora atual( fun��o now())
	duration<double> tempo=duration_cast<duration<double>>(t2-t1);// criar vari�vel per�odo (tipo vector duration) // igualar � diferen�a de time_ponit e converter
	cout << "Tempo de trabalho: " << tempo.count() << " segundos" << endl; // usar m�todo .count()
			
	return 0;
}
