/*
93) Faça um programa que tenha um procedimento chamado Contador() que recebe
três valores como parâmetro: o início, o fim e o incremento de uma contagem. O
programa principal deve solicitar a digitação desses valores e passá-los ao
procedimento, que vai mostrar a contagem na tela.
 
Ex: Para os valores de início (4), fim (20) e incremento(3) teremos
Contador(4, 20, 3) vai mostrar na tela 4 >> 7 >> 10 >> 13 >> 16 >> 19 >> FIM
*/

#include <iostream>

using namespace std; 

void Contador(int inicio, int fim, int incremento);

int main(){
	
	int inicio, fim, incremento;
	
	cout << "Digite de onde a contagem começa: ";
	cin >> inicio;
	cout << "Digite até onde a contagem vai: ";
	cin >> fim;
	cout << "Digite de qual será o salto da contagem: ";
	cin >> incremento;
	
	Contador(inicio, fim, incremento);
	
	return 0;
}

void Contador(int inicio, int fim, int incremento){
	
	cout << endl;
	
	for(int i = inicio; i<fim;i = i + incremento){
		cout << i << " >> ";
	}
	
	cout << "FIM";
}
