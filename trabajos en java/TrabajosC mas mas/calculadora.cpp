#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int operacion;
    double A, B;

    cout << "Seleccione operacion a realizar:\n";
    cout << "1. Suma\n2. Resta\n3. Multiplicación\n4. División\n5. Potencia\n";
    cout << "6. Raíz\n7. Suma de potencias\n8. Promedio\n9. Comparación\n";
    cout << "Opción: ";
    cin >> operacion;

    cout << "Ingrese valor A: ";
    cin >> A;
    cout << "Ingrese valor B: ";
    cin >> B;

    double res;

    switch (operacion) {
        case 1:
            res = A + B;
            cout << "La suma de los números es: " << res << endl;
            break;
        case 2:
            res = A - B;
            cout << "La resta de los números es: " << res << endl;
            break;
        case 3:
            res = A * B;
            cout << "La multiplicación de los números es: " << res << endl;
            break;
        case 4:
            if (B != 0) {
                res = A / B;
                cout << "La división de los números es: " << res << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        case 5:
            res = pow(A, B);
            cout << "La potencia es: " << res << endl;
            break;
        case 6:
            res = pow(A, 1.0 / B);
            cout << "La raíz es: " << res << endl;
            break;
        case 7:
            res = pow(A, B) + pow(A, B);
            cout << "La suma de potencias es: " << res << endl;
            break;
        case 8:
            res = (A + B) / 2;
            cout << "El promedio de los dos números es: " << res << endl;
            break;
        case 9:
            if (A == B) {
                cout << "Los números son iguales: " << A << endl;
            } else if (A > B) {
                cout << "El número mayor es: " << A << endl;
            } else {
                cout << "El número mayor es: " << B << endl;
            }
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}