#include <iostream>
using namespace std;

int main(){
	/* 76. Fa�a um algoritmo que:
	a) Crie um vetor de tamanho 10;
	b) Preencha cada posi��o do vetor com zero;
	c) Preencha cada posi��o do vetor com um n�mero que seja igual ao quadrado do �ndice dessa posi��o
	(por exemplo, o terceiro elemento seria 9, pois 9 � o quadrado do �ndice da 3a. posi��o).
	d) Imprima os elementos do vetor que t�m �ndice par. */
	
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
