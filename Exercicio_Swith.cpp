#include<iostream>

using namespace std;

int main()
{
	int operador;
	
	cout << "Informe Qual eh o operador: ";
	cin << operador;
	
	switch(operador)
	{
	case 1: 
		cout << "Operador 1";
		break;
	case 2:
		cout << "Operador 2";
		break;
	case 3:
		cout << "Operador 3";
		break;
	case 2585:
		cout << "Operador 2585";
		break;
	default:
		cout << "Nunhum Operador Escolhido";	
	}
	

	system("pause");
	return(0);
}
