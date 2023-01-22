/*
94) [DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado
Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos
termos da sequência serão mostrados na tela. O seu procedimento deve receber
esse valor e mostrar a quantidade de elementos solicitados.
Obs: Use os exercícios 70 e 75 para te ajudar na solução
Ex:
Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM
*/

#include <iostream>

using namespace std;

void Fibonacci(int tam);

int main(){
	
	int tam;
	
	cout << "Digite quantos quantos numeros quer ver da sequência: ";
	cin >> tam;	
	
	Fibonacci(tam);
		
	return 0;
}

void Fibonacci(int tam){
	
	int t1 = 1, t2 = 1, t3;
	
	cout << t1 << " >> " << t2 << " >> ";;
			
	for(int i = 3;i<=tam;i++){
		t3 = t1 + t2;
		cout << t3 << " >> ";
		t1 = t2;
		t2 = t3;
	}
	
	cout << endl;
	cout << "FIM";
			
}
