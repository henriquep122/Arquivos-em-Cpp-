/*
88) Crie um programa que melhore o procedimento Gerador() da questão anterior
para que mostre uma mensagem vário
Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece:
+-------=======------+
Aprendendo Portugol
Aprendendo Portugol
Aprendendo Portugol
Aprendendo Portugol
+-------=======------+
*/

#include <iostream>

using namespace std;

void Gerador(string frase);

int main(){
	
	cout << "+-------=======-------+" << endl;
	
	for(int i=0;i<4;i++){	
		
		Gerador("Aprendendo Portugol");
	}	
	
	cout << "+-------=======-------+" << endl;
	
	
	return 0;
}

void Gerador(string frase){
	cout << "  " <<  frase  << "  " << endl;
}
