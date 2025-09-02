#include <iostream>
using namespace std;

class Recorrer {
	private:
		int carga;
	public:
		void ingresar();
		void mostrar();
};

void Recorrer::ingresar(){
	cout<<"Ingrese un valor entero: ";
	cin>>carga;
}

void Recorrer::mostrar(){
	for(int i=1; i<=carga; i++){
		cout<<i<<endl;
	}
}

int main(){
	
	Recorrer recorrer;
	recorrer.ingresar();
	recorrer.mostrar();
}
