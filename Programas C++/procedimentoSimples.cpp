/*
86) Crie um programa que tenha um procedimento Gerador() que, quando chamado,
mostre a mensagem "Olá, Mundo!" com algum componente visual (linhas)
Ex: Ao chamar Gerador() aparece:
+-------=======------+
Olá, Mundo!
+-------=======------+
*/

#include <iostream>

using namespace std;

void Gerador();

int main(){
	
	
Gerador();
	
	
	return 0;
}

void Gerador(){
	cout << "+-------=======------+" << endl;
	cout << "      Olá, Mundo!     " << endl;
	cout << "+-------=======------+" << endl;
}
