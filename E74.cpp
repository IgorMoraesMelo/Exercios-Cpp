#include <iostream>
using namespace std;

int main(){
	/* 74. Faça um algoritmo que:
	a) Preencha um vetor com 30 ocorrências de zeros;
	b) Preencha este mesmo vetor com 1, 2, 3 ... até 30.*/
	
	int Num[30];
	
	//Letra A
	for(int i = 0; i < 30; i++){ 
		Num[i] = 0;
		cout << Num[i] << "\n";
	}

	//Letra B
	for (int i = 0; i < 30; i++){ 
		Num[i] = i+1;
		cout << Num[i] << "\n";
	}
	
	system("color 5F");
	system("pause");
	return(0);
}
