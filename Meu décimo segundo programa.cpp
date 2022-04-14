#include <iostream>
using namespace std;
int main(){
	int n1, n2, n3;
	
	n1=0;
	n2=0;
	n3=0;
	
	while(n1++<10){
		cout << n1 << "\n";
	}
	
	cout << "\n\nRotina finalizada\n";
	
	while(n2<20){
		cout << n2 << "\n";
		n2=n2+2;
	}
	
	cout << "\n\nRotina finalizada\n";
	
	while(n3<1000){
		cout << n3 << "\n";
		n3++;
		if(n3==500){
			break;
		}
	}
	
	cout << "\n\nRotina finalizada\n";
		
	return 0;
}
