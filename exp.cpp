#include <iostream>
using namespace std;

int main(){
	
	int l,c;
	int vetor[100][100];
	
	for(l=0;l<100;l++){
		for(c=0;c<100;c++){
			vetor[l][c]=0;
		}
	}
	
	for(l=0;l<100;l++){
		for(c=0;c<100;c++){
			cout << vetor[l][c] << " ";
			}
	cout << "\n";
	}
	return 0;
}
