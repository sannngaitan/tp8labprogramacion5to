#include <iostream>
#include <vector>
using namespace std;

class CNumeros {
private:
    int suma;
    int N;
public:
    void ingresar();
    void calcularPerfecto();
    vector<int> calcularDivisores();
};

void CNumeros::ingresar() {
    cout << "Ingrese el numero al que desea saber si es perfecto: ";
    cin >> N;
}

vector<int> CNumeros::calcularDivisores() {
    vector<int> divisores;
    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) {
            divisores.push_back(i);
        }
    }
    return divisores;
}

void CNumeros::calcularPerfecto() {
    vector<int> divs = calcularDivisores();
    suma = 0;

    cout << "Divisores: ";
    for (size_t j = 0; j < divs.size(); j++) {
        cout << divs[j] << " ";
        suma += divs[j];
    }
    cout << " -> suma = " << suma;

    if (suma == N) {
        cout << " -> Perfecto" << endl;
    } else {
        cout << " -> No es perfecto" << endl;
    }
}

int main() {
    CNumeros numeros;
    numeros.ingresar();
    numeros.calcularPerfecto();
    return 0;
}

