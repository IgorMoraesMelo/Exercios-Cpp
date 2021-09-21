#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	//Contagem Regressiva com FOR
	
	for(int Contador = 10; Contador >=0; Contador--){
		cout << "\n\t\t\t\t\t\t" << Contador << "\n\n";
		Sleep(1000); //Delay de 1 Segundo
	}
	cout << "\t\t\t\t\tAO INFINITO E ALEM!!";
	
	
	
	
	cout << "\n\n";
	system("PAUSE");
	return(0);
}
