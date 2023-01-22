/*
96) Crie um programa que tenha uma função Media(), que vai receber as 2 notas de
um aluno e retornar a sua média para o programa principal.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double Media(int n1, int n2);

int main(){
	
	double n1, n2;
	
	cout << "Informe a 1° nota: ";
	cin >> n1;
	cout << "Informe a 2° nota: ";
	cin >> n2;
	
	cout << "A média das notas é de: " << fixed << setprecision (1) << Media(n1, n2) << endl;
	
	return 0;
}

double Media(int n1, int n2){
	
	double media;
	media = (n1 + n2)/2;
	
	return media;
}
