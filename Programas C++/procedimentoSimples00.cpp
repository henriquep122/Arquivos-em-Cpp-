/*
90) Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
valores para um procedimento Somador() que vai calcular e mostrar a soma entre
eles.
*/

#include <iostream>

using namespace std;

void Somador(int n1, int n2);

int main(){
	
	int n1, n2;
	
	cout << "Digite um valor: ";
	cin >> n1;
	cout << "Digite outro valor: ";
	cin >> n2;
	
	Somador(n1, n2);
	
	return 0;
}

void Somador(int n1, int n2){
	cout << "A soma entre eles é de: " << n1+n2 << endl;
}

