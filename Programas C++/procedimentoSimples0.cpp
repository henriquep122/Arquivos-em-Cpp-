#include <iostream>

using namespace std;

void mensagem(string frase);
void dobro(int valor);

int main(){
	
	int num;
	
	mensagem("Exercício");
	
	cout << "Digite um numero: ";
	cin >> num;
	
	dobro(num);	
	
	mensagem("Fim do Exercício");
	
	return 0;
}

void mensagem(string frase){
	cout << "-----------------------------" << endl;
	cout << "       " << frase << "       " << endl;
	cout << "-----------------------------" << endl;
}

void dobro(int valor){
	int res;
	res = valor*2;
	cout << "O      dobro do " << valor << " é igual a: " << res << endl;
}

