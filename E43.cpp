#include<iostream>
using namespace std;
int main(){
	/* 43. Construir um algoritmo que leia NOME, ALTURA e SEXO de um grupo
	indeterminado de pessoas e que calcule e imprima:
	a) A média de altura dos homens.
	b) A maior altura.
	c) A menor altura.*/
	
	int Qtd_Pessoas = 0;
	float Altura, Soma_Altura = 0, Media, Maior = 0, Menor = 3;
	char Nome[256], Sexo;
	string Resposta = "Sim";
	
	while(Resposta == "Sim"){
		cout << "Informe o nome: ";
		cin >> Nome;
		cout << "Informe a altura: ";
		cin >> Altura;
		cout << "Informe o sexo: ";
		cin >> Sexo;
		cout << "Deseja continuar cadastrando as pessoas? ";
		cin >> Resposta;
		
			if(Sexo == "M" || Sexo == "m"){
				Qtd_Pessoas++;
				Soma_Altura+=Altura;	
			}
			else if (Altura > Maior ){
				Maior = Altura;}
			else if (Altura < Menor){
				Menor = Altura;
			}
			
		
	}
	Media = Soma_Altura / Qtd_Pessoas;
	cout << "\n\nA media das alturas dos homens informadas eh igual a: " << Media;
	cout << "\nA maior altura eh igual a: " << Maior;
	cout << "\nA menor altura eh igual a: " << Menor;
	cout << "\n\n";
	system("pause");
	return(0);
}
