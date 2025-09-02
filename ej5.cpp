#include <iostream>
#include <vector>
using namespace std;

class CNumeros {
private:
    int N;
public:
    void ingresar();
    vector<int> calcularDivisores(int x);
    void calcularPerfectosHastaN();
};

void CNumeros::ingresar(){
    cout<<"Ingrese el numero limite: ";
    cin>>N;
}

vector<int> CNumeros::calcularDivisores(int x){
    vector<int> divisores;
    for (int i=1; i<=x/2; i++) {
        if (x % i == 0) {
            divisores.push_back(i);
        }
    }
    return divisores;
}

void CNumeros::calcularPerfectosHastaN(){
    cout<<"Resultados hasta "<<N<<":"<<endl;
    for(int num=2; num<=N; num++){
        vector<int> divs = calcularDivisores(num);
        int suma = 0;
        for (size_t j = 0; j<divs.size(); j++){
            suma += divs[j];
        }

	cout<<num<<" -> divisores: ";
	for(size_t j = 0; j<divs.size(); j++){
    cout<<divs[j]<<" ";
	}
	cout<<" (suma = "<<suma<< ")";

        if (suma == num){
            cout<<" -> Perfecto";
        } else {
            cout<<" -> No es perfecto";
        }
        cout<<endl;
    }
}

int main() {
    CNumeros numeros;
    numeros.ingresar();
    numeros.calcularPerfectosHastaN();
}

