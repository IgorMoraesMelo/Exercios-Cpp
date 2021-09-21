#include <iostream>
using namespace std;

int main(){
	/* 76. Faça um algoritmo que:
	a) Crie um vetor de tamanho 10;
	b) Preencha cada posição do vetor com zero;
	c) Preencha cada posição do vetor com um número que seja igual ao quadrado do índice dessa posição
	(por exemplo, o terceiro elemento seria 9, pois 9 é o quadrado do índice da 3a. posição).
	d) Imprima os elementos do vetor que têm índice par. */
	
	//Letra A
	int Num[10];
	
	//Letra B
	for(int i = 0; i < 10; i++){
		Num[i] = 0;
		cout << Num[i] << "\n";
	}
	
	//Letra D
	for(int i = 0; i < 10; i++){
		Num[i] = i * i;
		cout << Num[i] << "\n";
	}
	
	//Letra D
	for(int i = 0; i < 10; i++){
		if(Num[i] % 2 == 0){
			cout << Num[i] << "\n";
		}
	}
	
	system("color 1C");
	system("PAUSE");
	return(0);
}
