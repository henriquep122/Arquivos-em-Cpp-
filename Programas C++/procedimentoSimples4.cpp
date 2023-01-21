/*
89) Crie um programa que melhore o procedimento Gerador() da questão anterior
para que o programador possa escolher uma entre três bordas:
+-------=======------+ Borda 1
~~~~~~~~:::::::~~~~~~~ Borda 2
<<<<<<<<------->>>>>>> Borda 3

Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2)
~~~~~~~~:::::::~~~~~~~
Portugol Studio
Portugol Studio
Portugol Studio
~~~~~~~~:::::::~~~~~~~
*/

#include <iostream>

using namespace std;

void Gerador(string frase, int total, int borda);

int main(){
			
	Gerador("Aprendendo Portugol", 2, 3);
		
	
	return 0;
}

void Gerador(string frase, int total, int borda){
	
	if(borda == 1){
		cout << "+-------=======-------+" << endl;
		
		for(int i =0;i<total;i++){
			cout << "  " <<  frase  << "  " << endl;
		}
		
		cout << "+-------=======-------+" << endl;	
	}	
	if(borda == 2){
		cout << "~~~~~~~~:::::::~~~~~~~" << endl;
		
		for(int i =0;i<total;i++){
			cout << "  " <<  frase  << "  " << endl;
		}
		
		cout << "~~~~~~~~:::::::~~~~~~~" << endl;	
	}	
	if(borda == 3){
		cout << "+<<<<<<<<------->>>>>>>" << endl;
		
		for(int i =0;i<total;i++){
			cout << "  " <<  frase  << "  " << endl;
		}
		
		cout << "<<<<<<<<------->>>>>>>" << endl;	
	}	
}

