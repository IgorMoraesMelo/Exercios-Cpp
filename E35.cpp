#include<iostream>
using namespace std;
int main(){
	//Exercicio 35
	
	int Cod_Cargo, Turno;
	float Hrs_Trab, Salario_Bruto, Salario_Base;
	string Nome_Func;
	
	cout << "\t\t\t\tPADARIA DA JUCREIA!"<< endl;
	cout << "\nInforme o nome do funcionario: ";
	cin >> Nome_Func;
	cout << "\nDigite a Quantidade de Horas trabalhadas: ";
	cin >> Hrs_Trab;
	cout << "\nDigite qual o codigo do cargo do funcionario: ";
	cin >> Cod_Cargo;
	cout << "\nInforme qual o turno de trabalho: ";
	cin >> Turno;
	
	switch(Cod_Cargo)
	{
	case 1: 
		Salario_Bruto = Hrs_Trab * 5;
		break;
	case 2:
		Salario_Bruto = Hrs_Trab * 9;
		break;
	default:
		cout << "\nCodigo de cargo não encontrado!";
	}
	
		switch(Turno)
		{
		case 1: 
			cout << "\nO salario bruto do funcionario: " << Nome_Func << " eh igual a: "<< Salario_Bruto * 1.03;
			break;
		case 2: 
			cout << "\nO salario bruto do funcionario: "<< Nome_Func << " eh igual a: "<< Salario_Bruto * 1.04;
			break;
		case 3:
			cout << "\nO salario bruto do funcionario: "<< Nome_Func << " eh igual a: "<< Salario_Bruto * 1.05;
			break;
		default:
			cout << "\nO turno informado nao eh definido!";	
		}
	
	cout << "\n\n";
	system("pause");
	return(0);
}
