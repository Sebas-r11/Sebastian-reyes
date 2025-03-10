#include <iostream>
#include <cmath>  // Para usar la función pow()

using namespace std;

int main() {
    // Solicitar el primer valor
    int A, C;
    cout << "Ingrese el primer valor: ";
    cin >> A;

    // Solicitar el segundo valor
    cout << "Ingrese el segundo valor: ";
    cin >> C;

    // Calcular la potencia
    double valor = pow(A, C);

    // Mostrar el resultado
    cout << "La potencia de " << A << " sobre " << C << " es: " << valor << endl;

    return 0;
}