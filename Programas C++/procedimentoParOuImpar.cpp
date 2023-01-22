/*
92) Crie uma lógica que leia um número inteiro e passe para um procedimento
ParOuImpar() que vai verificar e mostrar na tela se o valor passado como
parâmetro é PAR ou ÍMPAR.
*/

#include <iostream>

using namespace std;

void ParOuImpar(int num);

int main(){
	
	int num;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	ParOuImpar(num);	
		
	
	return 0;
}

void ParOuImpar(int num){
	
	if(num % 2 == 0 ){
		cout << "O valor " << num << " é PAR!" << endl;
	}
	else {cout << "O valor " << num << " é IMPAR!";
	}
	
}																						
