/*Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em
um vetor. No final, mostre:
a) Qual é a média da turma
b) Quantos alunos estão acima da média da turma
c) Qual foi a maior nota digitada
d) Em que posições a maior nota aparece
* 
* Algumas alterações no 
*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	
	string nome_maior_nota, nome_menor_nota;
		
	int tam, cont_alunos;
	double maior_nota = 0, menor_nota = 0, soma_notas = 0, media = 0;
		
	cout << "Informe quantos alunos serão cadastrados: ";
	cin >> tam;
		
	cout << endl;
	
	double nota[tam];
	string nome[tam];
	
	for(int i = 0;i<tam;i++){
		cout << "Informe o nome do aluno: ";
		cin >> nome[i];
		cout << "Informe a nota do " << nome[i] << ": ";
		cin >> nota[i];
		cout << "-------------------------------------------" << endl;
		
	}
	
	cout << "===========================================" << endl;
	cout << "               LISTA DE NOTAS              " << endl;
	cout << "===========================================" << endl;
	
	for(int i = 0; i<tam;i++){
		cout << nome[i] << "\t\t\t\t\t" << nota[i] << endl;
				
	}
	for(int i = 0; i<tam;i++){
		
		if(nota[i] > maior_nota){
			maior_nota = nota[i];
			nome_maior_nota = nome[i];
			menor_nota = nota[i];
		}
		if(nota[i] < menor_nota){
			menor_nota = nota[i];
			nome_menor_nota = nome[i];
		}
		if(nota[i] > 0 ){
			soma_notas = soma_notas + nota[i];
		}
			
					
	}
		
	media = soma_notas/tam;
	cout << "===========================================" << endl;
	cout << endl;	
	
	cout << "A média da turma é de: " << media << endl;
	
	//encontrando a posição da maior nota no vetor.
	for(int i=0;i<5;i++){
		if(maior_nota == nota[i]){
			cout << "A maior nota " << "(" << maior_nota << ")" << " se encontra na posição: " << i << endl;
		}
	}
		
	cout << "Aluno com a maior nota: " << nome_maior_nota << " com " << maior_nota << " pontos" << endl;
	cout << "Aluno com a menor nota: " << nome_menor_nota << " com " << menor_nota << " pontos" << endl;
	
	for(int i = 0; i<tam;i++){
	if(nota[i] > media){
			cont_alunos++;
			cout << "Alunos acima da média " << "(" << media << ")" << " da turma: " << cont_alunos << endl;
		}
	}
		
	
	return 0;
}
