#include <iostream>
using namespace std;

int main(){
	/*75. Dada a tabela de valores abaixo, calcule e imprima:
	a) Soma total dos valores.
	b) Média dos valores. TABELA 10 20 30 40 50	*/
	
	int Valor[5];
	float Soma, Media;
	Valor[0] = 10;
	Valor[1] = 20;
	Valor[2] = 30;
	Valor[3] = 40;
	Valor[4] = 50;
	
	//Letra A
	
	Soma = Valor[0] + Valor[1] + Valor[2] + Valor[3] + Valor[4];
	cout << "A soma do valores eh igual a: " << Soma << "\n";
	
	//Letra B
	
	Media = Soma / 5;
	cout << "A media dos valores eh igual a: " << Media << "\n";

	system("color 1C");
	system("PAUSE");
	return(0);
}
