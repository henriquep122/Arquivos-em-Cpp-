/*
100) Melhore o exercício 96, criando além da função Media() uma outra função
chamada Situacao(), que vai retornar para o programa principal se o aluno está
APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como
parâmetro o resultado retornado pela função Media().
*/

#include <iostream>
#include <string.h>

using namespace std;

double Media(double n1, double n2);
double Situacao(double media);

int main(){
	
	double n1, n2;
	
	cout << "Informe a 1° nota do aluno: ";
	cin >> n1;
	cout << "Informar a 2° nota do aluno: ";
	cin >> n2;	
	
	cout << endl;
	cout << "A média da nota do aluno é de: " << Media(n1, n2) << endl;
	cout << endl;
		
	Situacao(Media(n1, n2));
	
	return 0;
}

double Media(double n1, double n2){
	
	double media;
	
	media = (n1 + n2)/2;
	
	return media;
}

double Situacao(double media){
		
	if(media >= 7){
		cout << "Aprovado";
	} else if(media > 5 && media < 7){
		cout << "Recuperação";
	}else(cout << "Reprovado");
	
	return media;
	
}
