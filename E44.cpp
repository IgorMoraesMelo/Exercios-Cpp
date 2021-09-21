#include<iostream>
using namespace std;
int main(){
	/* 44. Elaborar um algoritmo que leia NOME, HORAS TRABALHADAS, SALÁRIOHORA e SEXO 
	de um grupo de operários e que calcule e imprima:
	a) Salário total dos funcionários.
	b) O maior salário, juntamente com o Nome de quem o recebeu */
	
	char Nome[256], Sexo;
	float Horas_Trab, Salario_Hr, Total_Salario, Total_Salario_Empresa = 0, Maior_Salario = 0;
	string Resposta = "Sim";
	
	while(Resposta == "Sim"){
		cout << "Informe o nome do funcionario: ";
		cin >> Nome;
		cout << "Informe quantas horas trabalha: ";
		cin >> Horas_Trab;
		cout << "Informe qual eh o seu salario por hora trabalhada: ";
		cin >> Salario_Hr;
		cout << "Informe o sexo: ";
		cin >> Sexo;
		Total_Salario = Horas_Trab * Salario_Hr;
		cout << "O valor total do salario do funcionario " << Nome << " eh igual a: " << Total_Salario << " Reais";
		cout << "\nDeseja continuar cadastrando funcionarios? ";
		cin >> Resposta;
		Total_Salario_Empresa+=Total_Salario;
			if(Total_Salario > Maior_Salario){
				Maior_Salario = Total_Salario;
			}
	}
	cout << "\n\nO total do salario dos funcionarios da empresa eh igual a: " << Total_Salario_Empresa;
	cout << "\nO maior salario da empresa eh do funcionario "<< Nome << " que equivale a: "<< Maior_Salario;
	

	cout << "\n\n";
	system("pause");
	return(0);
}
