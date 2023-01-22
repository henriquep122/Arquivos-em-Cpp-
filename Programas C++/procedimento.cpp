#include <iostream>

using namespace std;

void mensagem(string frase);


int main(){
	
	int num;
	
	for(int i =0;i<2;i++){
	mensagem("Exercício");
	cout << endl;
	cout << "Digite um numero: ";
	cin >> num;
	cout << "O dobro de " << num << " é igual a: " << num*2 << endl;
	}
	
	mensagem("Fim do exercício  ");
	
	return 0;
}

void mensagem(string frase){
	
	cout << "------------------------------" << endl;	
	cout << "\t" << frase << "\t" << endl;
	cout << "------------------------------" << endl;	
}
