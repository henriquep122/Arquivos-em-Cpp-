/*
99) Faça um programa que possua uma função chamada Potencia(), que vai receber
dois parâmetros numéricos (base e expoente) e vai calcular o resultado da
exponenciação.
Ex: Potencia(5,2) vai calcular 5² = 25
*/

#include <iostream>
#include <math.h>
using namespace std;

int Potencia(int n1, int n2);

int main(){
	
	int n1, n2;
	
	cout << "Digite a base da potencia: ";
	cin >> n1;
	cout << "Digite o expoente da potencia: ";
	cin >> n2;
	
	cout << "A exponenciação de " << n1 << " elevado a " << n2 << " é " << Potencia(n1, n2) << endl;	
	
	return 0;
}

int Potencia(int n1, int n2){
	
	int res;
	res = pow(n1, n2);
	
	return res;
}
