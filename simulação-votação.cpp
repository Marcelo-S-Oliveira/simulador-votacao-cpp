#include <iostream>
#include <locale.h>
#include <limits>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vA = 0, vB = 0, voto, vNulo = 0;
	
	cout << "Vote no seu candidato: " << "\n";
	cout << "\n1 - Votar no Candidato A" << "\n";
	cout << "2 - Votar no Candidato B" << "\n";
	cout << "3 - Finalizar\n\n> "; // isso faz com que o cin desse duas linhas
	
	
	while(true){
		
		cout << "Digite seu voto: ";
		cin >> voto;
		
		if(cin.fail()){
			cout << "Erro: Digite um número válido!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		
		if(voto == 1){
			vA += 1;
		}
		else if(voto == 2){
			vB += 1;
		}
		else if(voto < 1 || voto > 3){
		cout << "\nErro: " << voto << " é uma opçção invalida! Voto nulo.\n";
	 		 vNulo += 1;
			 continue;
		}
		else{
		cout << "\nVOTACAO ENCERRADA!\n";
		break;
		}
}	
	cout << "\n*************************" << "\n" << "\n";
	cout << "     TOTAL DOS VOTOS " << "\n" << "\n" ;
	cout << "Candidato A: " << vA << "\n";
	cout << "Candidato B: " << vB << "\n";
	cout << "Nulos: " << vNulo << "\n" << "\n";
	
	if(vA > vB){
		cout << "VENCEDOR: Candidato A\n";
		cout << "\n*************************" << "\n";
	}
	else if(vB > vA){
		cout << "VENCEDOR: Candidato B\n";
		cout << "\n*************************" << "\n";
	}
	else{
		cout << "Empate entre os candidatos!\n";
		cout << "\n*************************" << "\n";
	}
	return 0;
	
}
