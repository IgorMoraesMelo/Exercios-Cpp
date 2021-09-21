#include <iostream>
using namespace std;

int main(){
	//Exercicio 37
	
	int Num_Tel, Num_Lig, Interurbano, Tipo_Tel;
	float Excedente, Total_Conta, ValorExcedente, ValorInter;
	string Nome_Cliente;

	cout << "\t\t\t\t\tSISTEMA DE COBRANCA - TELEMAR!!"<<endl;
	cout << "\nInforme o nome do cliente: ";
	cin >> Nome_Cliente;
	cout << "\nDigite o numero de telefone sem pontos: ";
	cin >> Num_Tel;
	cout << "\nInforme o numero de ligacoes feitas pelo cliente: ";
	cin >> Num_Lig;
	cout << "\nInforme o numero total de interurbanos: ";
	cin >> Interurbano;
	cout << "\t\t\t\t\t\nDigite qual o tipo de telefone do cliente" <<endl;
	cout << "Telefone Residencial = 1" << "\nTelefone Comercial = 2" << endl;
	cin >> Tipo_Tel;
	
	if (Num_Lig > 100)
	{
		Excedente = Num_Lig - 100;
		ValorExcedente = Excedente * 0.15;
		cout << "\nO cliente deve pagar 0.15 centavos por impulso excedente"<<endl;
		cout << "\nO valor que o cliente devera pagar eh igual a: "<<ValorExcedente;	
	}
		else if (Interurbano > 0)
		{
			ValorInter = Interurbano * 1.05;
			cout << "\nO cliente devera pagar: " << ValorInter << " por ligacoes interurbanas feitas";
		}
		
	else{
		cout << "\nO cliente nao excedeu o numero total de ligacoes!";
	}
	
	switch(Tipo_Tel)
	{
		case 1: 
			cout << "\n O cliente: "<<Nome_Cliente << " possui um telefone Residencial";
			cout << "\ne Valor de tarifa basica que o cliente deve pagar eh igual a: 38,14 Reais";
			cout << "\n\nO total do valor da conta eh igual a: "<< 38.14 + ValorExcedente + ValorInter;
			break;
		case 2:
			cout << "\n O cliente: "<<Nome_Cliente << "possui um telefone Comercial"<<endl;
			cout << "\nO Valor de tarifa basica que o cliente deve pagar eh igual a: 64,69 Reais";
			cout << "\n\nO total do valor da conta eh igual a: "<< 64.69 + ValorExcedente + ValorInter << "Reais";
			
			break;
		default:
			cout << "\nO Tipo plano informado esta incorreto!";
	}
	

	cout <<"\n\n"
	system("pause");
	return(0);
}
