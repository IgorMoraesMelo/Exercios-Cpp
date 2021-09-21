#include <iostream>

using namespace std;

int main(){
	
	int Matriz[60][10];
	
	
	for (int Coln = 0; Coln < 60; Coln++){
		for (int Lin = 0; Lin < 10; Lin++) {
			Matriz [Coln][Lin] = 0;
			
		}
	}
		
	for (int Coln = 0; Coln < 60; Coln++){
		for (int Lin = 0; Lin < 10; Lin++){
			cout << Matriz[Coln][Lin] <<"|";
			
		}
		cout << "\n";
	}
	
	
	
	system("pause");
	return(0);
}
