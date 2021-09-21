#include<iostream>
using namespace std;
int main(){
	
	string Nome, Sexo, Opcao, Nome_Aux;
	float Salario, Horas, Total = 0, Maior = 0, Cont = 1;
	
	
	do{
	
	cout << "\t\t\t\t\tCADASTRANDO FUNCIONARIO " << Cont++;
	cout << "\nInforme o nome: ";
	cin >> Nome;
	cout << "Informe o Sexo: ";
	cin >> Sexo;
	cout << "Informe o Salario: ";
	cin >> Salario;
	cout << "Informe o Horas Trabalhadas: ";
	cin >> Horas;
	Total += (Horas * Salario);
	
	if (Maior < (Horas * Salario)){
		Maior = (Horas * Salario);	
		Nome_Aux = Nome;
	}
	cout << "\n\n\t\tDeseja continuar?? \n\n\t\t<S>im\n\n\t\t<N>ao\t\t\n";
	cin >> Opcao;
	system("cls");
	}while(Opcao != "N" && Opcao != "n");
	
	cout << "\n\n\t\tSALARIO TOTAL: " << Total;
	cout << "\n\n\t\tMAIOR SALARIO: " << Maior;
	cout << "\n\n\t\tNOME FUNCIONARIO: " << Nome_Aux;
	
	cout << "\n\n";
	system("pause");
	return(0);
}
