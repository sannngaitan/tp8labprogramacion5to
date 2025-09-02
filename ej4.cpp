#include <iostream>
using namespace std;

class CEmpleados {
	private:
		string nombre;
		int salario;
		int horas;
	public:
		void aumento();
		void ingresar();
		void imprimir();
};

void CEmpleados::ingresar(){
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ingrese su salario: ";
	cin>>salario;
	cout<<"Ingrese sus horas de trabajo (8, 10, 12 o mas): ";
	cin>>horas;
}

void CEmpleados::aumento(){
	if(horas==8){
		salario += 250000;
	}
	if(horas==10){
		salario += 300000;
	}
	if(horas>=12){
		salario += 350000;
	}
}

void CEmpleados::imprimir(){
	cout<<"Su nombre es: "<<nombre<<" y su salario es de: "<<salario;
}

int main(){
	CEmpleados empleados;
	empleados.ingresar();
	empleados.aumento();
	empleados.imprimir();
}
