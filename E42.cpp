#include<iostream>
using namespace std;
int main(){
	
	/* 42.Construir  um  algoritmo  que  leia  NOME  e  IDADE  de  300  pessoas  
	e  que  calcule  e imprima: 
	a) A soma de idade das pessoas.
	b) Os nomes das pessoas com idade maior ou igual a 21 anos */
	
	char Nome[256];
	int Idade, Soma = 0;
	
	for(int Numero_Pessoal = 0; Numero_Pessoal < 300; Numero_Pessoal++){
		cout << "Informe seu Nome: ";
		cin >> Nome;
		cout << "Informe sua Idade: ";
		cin >> Idade;
		Soma = Soma + Idade;
			if(Idade >= 21){
				cout << Nome << " possui mais de 21 anos\n\n";
			}	
	}
	cout << "\nA soma das imagens eh igual a: " << Soma;
	
	
	
	
	
	
	cout << "\n\n";
	system("pause");
	return(0);
}
