#include<iostream>
using namespace std;
int main(){
	//Exercicio 31
	
	int  Classe_Func;
	float Hrs_Trab, Salario_Bruto, Salario_Liq;
	string Nome_Func;
	
	cout << "\t\t\t\tSNOB CONFECCOES"<<endl;
	cout << "\nInforme o nome do funcionario: ";
	cin >> Nome_Func;
	cout << "\nInforme a Quantidade de Horas trabalhadas no mes: ";
	cin >> Hrs_Trab;
	cout << "\nInforme a Classe Funcional do Empregado: ";
	cin >> Classe_Func;
	
	switch(Classe_Func)
	{
	case 1:
		Salario_Bruto = Hrs_Trab * 5;
		cout << "\nO salario liquido do funcionario: "<< Nome_Func<<" eh igual a: "<<Salario_Bruto * 0.89 ;
		break;
	case 2: 
		Salario_Bruto = Hrs_Trab * 9;
		cout << "\nO salario liquido do funcionario: "<< Nome_Func<<" eh igual a: "<< Salario_Bruto * 0.89;
		break;
	default:
		cout << "\nA classe do funcionario nao foi encontrada para lançamento do salario!"	;
	
	}

	cout <<"\n\n";
	system("pause");
	return(0);
}
