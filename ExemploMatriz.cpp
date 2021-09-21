#include <iostream>

using namespace std;

int main(){
	
	int MatrizP1[10][10];
	int MatrizP2[10][10];
	int Contador = 0;
	
	for (int Coln = 0; Coln < 10; Coln++){
		for (int Lin = 0; Lin < 10; Lin++) {
			MatrizP1 [Coln][Lin] = 0;
		}
	}
	
	for (int Coln = 0; Coln < 10; Coln++){
		for (int Lin = 0; Lin < 10; Lin++){
			MatrizP2[Coln][Lin] = ++ Contador;
		}
	}
			
	for (int Coln = 0; Coln < 10; Coln++){
		for (int Lin = 0; Lin < 10; Lin++){
			cout << MatrizP2[Coln][Lin] <<"+";
		}
		cout << "\n";
	}
	
	
	
	system("pause");
	return(0);
}
