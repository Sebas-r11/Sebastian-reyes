#include <iostream>

using namespace std;

int main() {
    int figura;
    double pi = 3.1416;
    double var1, var2, res;

    cout << "Seleccione la figura a calcular: \n";
    cout << "1. Rombo\n2. Rectángulo\n3. Cuadrado\n4. Trapecio\n";
    cout << "Ingrese el número de la figura: ";
    cin >> figura;

    cout << "Ingrese el primer valor: ";
    cin >> var1;
    cout << "Ingrese el segundo valor: ";
    cin >> var2;

    switch (figura) {
        case 1:
            res = (var1 * var2) / 2;
            cout << "El área del Rombo es: " << res << endl;
            break;
        case 2:
            res = var1 * var2;
            cout << "El área del Rectángulo es: " << res << endl;
            break;
        case 3:
            res = var1 * var2;
            cout << "El área del Cuadrado es: " << res << endl;
            break;
        case 4:
            res = var1 * var2;
            cout << "El área del Trapecio es: " << res << endl;
            break;
        default:
            res = var1 * pi;
            cout << "Valor desconocido, resultado: " << res << endl;
            break;
    }

    return 0;
}
