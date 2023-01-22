#include <iostream>

using namespace std;

void mensagem(string frase);

int soma(int a, int b);

int main(){
	
	int n1, n2;
	
	mensagem("  SOAMDOR DE VALORES ");
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro valor: ";
	cin >> n2;
			
	cout << "A soma é: " << soma(n1, n2) << endl;
	
	mensagem("\tACABOU");
	
	return 0;
}

void mensagem(string frase){
	cout << "======================" << endl;
	cout << "" << frase << "" << endl;
	cout << "======================" << endl;
}

int soma(int a, int b){
			
	return a + b;
}

