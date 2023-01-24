/*
Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
valores para um procedimento Maior() que vai verificar qual deles é o maior e
mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem
informando essa característica.
*/

#include <iostream>

using namespace std;

void Maior(int n1, int n2);

int main(){
	
	int n1, n2;
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	
	Maior(n1, n2);
	
	return 0;
}

void Maior(int n1, int n2){
	if(n1 > n2){
		cout << "O valor maior é do 1° numero informado: " << n1 << endl;
	}
	else if(n2 > n1){
		cout << "O valor maior é do 2° numero informado: " << n2 << endl;
	}
	else if(n1 == n2){
		cout << "O valor 1 e o valor 2 são iguais." << endl;
	}
}
