#include <iostream>

using namespace std;

double media(double a, double b, double c){
	
	double m;
	m = (a + b + c)/3;
	
	return m;
	
}

int main(){
	
	cout<<"\t       ++++++ MEDIA ++++++\n";
    cout<<"\t ======================================== \n";
    cout<<"\t          |Média Aritemtica| \n";
    cout<<"\t ======================================== \n";
	
	double a, b, c, calc;
	
	cout << "Informe o valor de a: " << endl;
	cin >> a;
	cout << "Informe o valor de b: " << endl;
	cin >> b;
	cout << "Informe o valor de c: " << endl;
	cin >> c;
	
	calc = media(a, b, c);
	cout << "Media: " << calc << endl;
	
	return 0;

}

/*
#include<iostream>
#include<cstdlib>

using namespace std;

float calc_media(float n1, float n2, float n3, int tipo) {
    float m;
    
    if(tipo == 1){ 
        m = (n1+n2+n3)/3;
    }
    if (tipo == 2){ 
        m = (n1*5+n2*3+n3*2)/(5+3+2);
    }
    
    if (tipo == 3){ 
        m = 3 / (1/n1 + 1/n2 + 1/n3);
    }
    
    return m;
}
    
int main(){
    cout<<"\t       ++++++ MEDIA ++++++\n";
    cout<<"\t ======================================== \n";
    cout<<"\t |1=Aritemtica  2=Ponderada  3=Harmonica| \n";
    cout<<"\t ======================================== \n";
    
    float n1,n2,n3, media;
    int escolha;

    cout<<"Nota do aluno:";
    cout<<"\n\n";
    cout<<"Nota 1: ";
    cin>>n1;
    cout<<"Nota 2: ";
    cin>>n2;
    cout<<"Nota 3: ";
    cin>>n3;
    
    cout<<"Ecolha uma media: ";
    cin>>escolha;
    media = calc_media(n1, n2, n3, escolha);
    cout << "Media: " << media << endl;
    system("pause");
    return 0;
}*/
