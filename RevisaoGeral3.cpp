#include <iostream>
using namespace std;
int main()
{
	//Crie um programa que imprima na tela os números ímpares entre 0 e 1000.
	
	int Cont, Num;
	
	for(Cont = 1; Cont <= 1000; Cont++){
		Num = Cont % 2;
		if(Num % 2 == 1){
			cout << Cont << "\n";
		}
	}
	
	system("color 5F");
	system("pause");
	return(0);
}
