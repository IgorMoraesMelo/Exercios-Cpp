#include <iostream>
using namespace std;

int main()
{
	//Crie um programa que receba um n�mero do teclado e informe se ele � PAR ou �MPAR.
	
	int Num;
	
	cout << "\t\t\t\t\tPar ou Impar\n\n";
	cout << "Informe um numero: ";
	cin >> Num;
	
	
	if(Num % 2 == 0){
		cout << Num << " eh par\n";
	}else{
		cout << Num << " eh impar\n";
	}
	system("Pause");
	return(0);
}
