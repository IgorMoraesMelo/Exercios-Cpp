#include<iostream>
using namespace std;
int main(){
	
	string Sexo, Resposta, Sim = "sim", Nao = "nao";
	int Total_Mulheres = 0, Mulheres_Positivos = 0;
	
	cout << "\n\n\t\t\t\t\tPESQUISA DE MERCADO!";
	
	for(int Entrevistados = 2000; Entrevistados <= 2000; Entrevistados-- ){
	cout << "Informe o sexo: ";
	cin >> Sexo;
	cout << "Responda Sim ou Nao: ";
	cin >> Resposta;
	
	if (Resposta == "Sim" || Resposta == "sim"){
		Resposta = Sim;
	}else if (Resposta == "Nao" || Resposta == "nao"){
		Resposta == Nao;
	}else{
		cout << "Resposta Errada!";
	}
	if (Sexo == "F" || Sexo == "f"){
		Total_Mulheres = Sexo;
	}
	}
	
	
	cout << "\n\n";
	system("pause");
	return(0);
}
