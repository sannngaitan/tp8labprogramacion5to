#include <iostream>
using namespace std;

class CNumeros {
	private:
		int n1;
		int n2;
		int n3;
	public:
		void ingresar();
		void menor();
		void mayor();
};

void CNumeros::ingresar(){
	cout<<"Ingrese el primer valor: ";
	cin>>n1;
	cout<<"Ingrese el segundo valor: ";
	cin>>n2;
	cout<<"Ingrese el tercer valor: ";
	cin>>n3;
}

void CNumeros::menor(){
	if(n1 < n2 && n1 < n3){
		cout<<"El valor menor es: "<<n1<<endl;
	} else if (n2 < n1 && n2 < n3) {
		cout<<"El valor menor es: "<<n2<<endl;
	} else if (n3 < n1 && n3 < n2) {
		cout<<"El valor menor es: "<<n3<<endl;
	}
}

void CNumeros::mayor(){
    if (n1 > n2 && n1 > n3) {
        cout<<"El valor mayor es: "<<n1<<endl;
    } else if (n2 > n1 && n2 > n3) {
        cout<<"El valor mayor es: "<<n2<<endl;
    } else if (n3 > n1 && n3 > n2) {
        cout<<"El valor mayor es: "<<n3<<endl;
    }
}

int main(){
	CNumeros num;
	num.ingresar();
	num.menor();
	num.mayor();
}
