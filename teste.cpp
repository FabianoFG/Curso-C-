#include <iostream>
using namespace std;

int main(){
	int alt=1;
	int larg=1;
	int mapa [alt][larg];
	int reini=1;

	inicio:
	
	cout << "\nDefina as dimensoes da matriz\n";
	cout << "\nLinhas: ";
	cin >> alt;
	cout << "\ncolunas: ";
	cin >> larg;
	
	cout << "\n\nDimensoes: " << alt << "x" << larg << "\n\n";
	
	cout << "Tabela\n\n";
	
	for (int l = 0; l < alt; ++l)
	{
		for (int c = 0; c < larg; ++c)
	{
		mapa[l][c]=0;
		cout << mapa[l][c] << " ";
	}
	cout << "\n";
	}
	
	cout << "\nDeseja repetir o programa? [ sim=1, nao=0]: ";
	cin >> reini;
		
	switch(reini){
		case 1:
			system("cls");
			goto inicio;
			break;
		case 0:
			cout << "\nFinalizado\n";
	}
	
	return 0;
}
