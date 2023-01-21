/*
98) Crie um programa que tenha uma função SuperSomador(), que vai receber dois
números como parâmetro e depois vai retornar a soma de todos os valores no
intervalo entre os valores recebidos.
Ex:
SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21
SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85
*/

#include <iostream>
using namespace std;

int SuperSomador(int n1, int n2);

int main(){
	
	int n1, n2;
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite um numero: ";
	cin >> n2;
	
	SuperSomador(n1, n2);
		
	return 0;
}


int SuperSomador(int n1, int n2){
	
	int x = 0;
	
	while(n1 < n2){
		
		for(int i=n1;i<=n2;i++){
			
			x = x + i;
								
			n1++;	
		}
		
	}

	cout << x;	
	
	return x;	
}
