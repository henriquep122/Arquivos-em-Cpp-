/*
87) Crie um programa que melhore o procedimento Gerador() da questão anterior
para que mostre uma mensagem personalizada, passada como parâmetro.
Ex: Ao chamar Gerador("Aprendendo Portugol") aparece:
+-------=======------+
Aprendendo C++
+-------=======------+
*/

#include <iostream>

using namespace std;

void Gerador(string frase);

int main(){
	
	
Gerador("Aprendendo Portugol");
	
	
	return 0;
}

void Gerador(string frase){
	cout << "+-------=======------+" << endl;
	cout << "  " <<  frase  << "  " << endl;
	cout << "+-------=======------+" << endl;
}

