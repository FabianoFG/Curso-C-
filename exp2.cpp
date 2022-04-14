#include <iostream>

using namespace std;

int main()
{
    int ROWS = 1;
    int COLUMNS = 1;
    
    cout << "Digite as dimensoes: ";
    cout << "\nLinhas\n";
    cin >> ROWS;
    cout << "\nColunas\n";
    cin >> COLUMNS;
    
    cout << "Grid\n" << endl;

    int arrayxy [ROWS][COLUMNS];

    for (int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
	{
		arrayxy[i][j] = 0;
		cout << arrayxy[i][j] << " ";
	}
	cout << '\n';
    }

    cout << endl;

    return 0;
}
