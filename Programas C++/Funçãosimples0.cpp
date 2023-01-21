/*
95) Refaça o exercício 90, só que agora em forma de função Somador(), que vai
receber dois parâmetros e vai retornar o resultado da soma entre eles para o
programa principal.
*/

#include <iostream>
using namespace std;

int Somador(int a, int b);

int main(){
	
	int n1, n2;
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Informe outro numero: ";
	cin >> n2;
	
	cout << "A soma dos valores é de: " << Somador(n1, n2) << endl;
		
	return 0;
}

int Somador(int a, int b){
	return a + b;
}

