#include <iostream>
using namespace std;

int fat(int n);

int main(){
	
	int n;
	
	cout << "De qual numero você gostaria de saber o fatorial: ";
	cin >> n;

	cout << "O fatorial de " << n << " é igual a = " << fat(n) << endl; 
	
	
	return 0;
}

int fat(int n){
	int f = 1;
	for(int i = n;i >= 1; i--){
		f*=i;
	}
	return f;
}
