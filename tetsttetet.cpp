#include<iostream>
using namespace std;
int main(){
		
	int Idade;
	string Nome;
	
	cout << "\t\t\t\t\t\tBEM VINDOS!" << endl;
	cout << "Informe seu nome: ";
	cin >> Nome;
	cout << "\nInforme sua idade: ";
	cin >> Idade;
	
	if (Idade > 0 && Idade <= 10){
		cout << Nome << " \nVoce eh crianca!!";
	}else if (Idade > 10 && Idade <=17) {
		cout << Nome << " \nVoce eh Adolecente!!";
	}else if (Idade > 17 && Idade <= 25) {
		cout << Nome << " \nVoce eh Jovem!!";
	}else if (Idade > 25 && Idade <= 33) {
		cout << Nome << " \nVoce eh Jovem Aldulto!!";
	}else if (Idade > 33 && Idade <= 50) {
		cout << Nome << " \nVoce eh Adulto!!";
	}else if (Idade > 50 && Idade <= 70) {
		cout << Nome << " \nVoce esta na terceira idade!!";
	}else{
		cout << Nome << " \nVoce eh Velho!!";
	}
	
	
	cout << "\n\n";
	system("pause");
	return(0);
}
