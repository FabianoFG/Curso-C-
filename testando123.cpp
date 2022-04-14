#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main(){
	
	clock_t t;
	t=clock();
	
	cout << "funcionou" << endl;
	//Bháskara
	float x1,x2,a,b,c,delta;
	
	a=(1);b=(2);c=(1);
		
	delta=(b*b)-(4*a*c);
	
	cout << "delta: " << delta << endl;
	
	cout << sqrt(delta) << endl;
	
	if(delta<0){
		cout << "indeterminado" << endl;
		goto terminar;
	}
	x1=((-b)+(sqrt(delta)))/(2*a);
	x2=((-b)-(sqrt(delta)))/(2*a);
	
	cout << "x1: " << x1 << " " << "x2: " << x2 << endl;
	
	/*
	t=clock()-t;
	
	cout << ((float)t)/CLOCKS_PER_SEC << endl;
	*/
	terminar:
	
	return 0;
}
