#include<iostream>
using namespace std;
int main(){
	
	float Sexo = 0, Resposta, Sim_Fem = 0, Sim_Masc = 0, Nao_Fem = 0, Nao_Masc = 0;
	float Total_Sim = 0, Total_Nao = 0, Porcen_Fem = 0 ;
	
	
	while((Sexo == 0) || (Sexo == 1)){
		cout << "\nInforme o Sexo: 0(Feminino) e 1(Masculino) ";
		cin >> Sexo;
		
		if((Sexo == 0) || (Sexo == 1)){
			cout << "\nResposta 0(Sim) e 1(Nao)";
			cin >> Resposta;
		}if ((Sexo == 0) && (Resposta == 0)){
			Sim_Fem = Sim_Fem + 1;
		}if ((Sexo == 0) && (Resposta == 1)){
			Nao_Fem = Nao_Fem + 1;
		}if ((Sexo == 1) && (Resposta == 0)){
			Sim_Masc = Sim_Masc + 1;
		}if ((Sexo == 1) && (Resposta == 1)){
			Nao_Masc = Nao_Masc + 1;
		}
		
		Total_Sim = (Sim_Fem + Sim_Masc);
		Total_Nao = (Nao_Fem + Nao_Masc);
		Porcen_Fem = (Sim_Fem / (Sim_Fem + Nao_Fem) * 100);
		
		cout << "\n\nO total de entrevistados que respondeu sim: " << Total_Sim;
		cout << "\nO total de entrevistados que respondeu nao: " << Total_Nao;
		cout << "\nPorcentagem de mulheres que responderam Sim: " << Porcen_Fem;
		
		
		}else{
			cout << "Finalizado!!";
		}
	
	}
	
	
	cout << "\n\n";
	system("pause");
	return(0);
}
