#include<iostream>
#include<windows.h> // Pesquisar a Biblioteca
using namespace std;
int main(){
	//Exercicio de Contagem Regresiva
	
	int Contador = 10;
	cout << "\n\n\t\t\t\tINICIANDO CONTAGEM REGRESSIVA...\n";
	
	while (Contador >=0){
		cout << "\n\t\t\t\t\t\t" << Contador << "\n\n";
		Contador--;
		Sleep(1000); //Delay de 1 Segundo
	}
	cout << "\t\t\t\t\tAO INFINITO E ALEM!!";
	
	
	
	cout << "\n\n";
	system("pause");
	return(0);
}
