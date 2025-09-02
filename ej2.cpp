#include <iostream>
using namespace std;

class Mayor {
	private:
		int valor1;
		int valor2;
	public: 
		void ingresar();
		void mostrar();
};

void Mayor::ingresar(){
	cout<<"Ingrese el primer valor: ";
	cin>>valor1;
	cout<<"Ingrese el segundo valor: ";
	cin>>valor2;
}

void Mayor::mostrar(){
	if(valor1==valor2){
		cout<<"Los dos valores son iguales";
		return;
	}
	
	if(valor1>valor2){
		cout<<"El valor mayor es el "<<valor1;
	} else {
		cout<<"El valor mayor es el "<<valor2;
	}

}

int main(){
	Mayor mayor;
	mayor.ingresar();
	mayor.mostrar();
}
