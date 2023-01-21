/*
97) Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma
adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o
maior entre eles.
*/

#include <iostream>
using namespace std;

int Maior(int n1, int n2, int n3);

int main(){
	
	int n1, n2, n3;
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	cout << "Digite mais um numero: ";
	cin >> n3;
	
	Maior(n1, n2, n3);
	
	return 0;
}

int Maior(int n1, int n2, int n3){
	
	if(n1 > n2 && n1 > n3){
		cout << "O valor maior é do 1° numero informado: " << n1 << endl;
	}
	else if(n2 > n1 && n2 > n3){
		cout << "O valor maior é do 2° numero informado: " << n2 << endl;
	}
	else if(n3 > n2 && n3 > n1){
		cout << "O valor maior é do 3° numero informado: " << n3 << endl;
	}
	else if(n1 == n2 && n1 == n3){
		cout << "O valor 1, 2 e 3 são iguais." << endl;
	}
	
	return 0;
	
}
