#include <iostream>

using namespace std;

int main() {
    int a, b;

    // Comparar dos números
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    if (a > b) {
        cout << "A es mayor que B" << endl;
    } else if (b > a) {
        cout << "B es mayor que A" << endl;
    } else {
        cout << "Son iguales" << endl;
    }

    // Pedir un número impar
    cout << "Ingrese un número: ";
    cin >> a;

    while (a % 2 == 0) {
        cout << "El número " << a << " es par, introduzca otro número: ";
        cin >> a;
    }
    cout << "El número " << a << " es impar. Programa terminado." << endl;

    // Menú infinito con while (true)
    while (true) {
        cout << "\nMenú:\n";
        cout << "1. Comparar dos números.\n";
        cout << "2. Introducir un número impar.\n";
        cout << "3. Terminar programa.\n";
        cout << "Seleccione una opción: ";
        
        int opcion;
        cin >> opcion;

        if (opcion == 1) {
            cout << "Introduzca el primer número: ";
            cin >> a;
            cout << "Introduzca el segundo número: ";
            cin >> b;

            if (a > b) {
                cout << "A es mayor que B" << endl;
            } else if (b > a) {
                cout << "B es mayor que A" << endl;
            } else {
                cout << "Son iguales" << endl;
            }
        } 
        else if (opcion == 2) {
            cout << "Introduzca un número: ";
            cin >> a;

            while (a % 2 == 0) {
                cout << "El número " << a << " es par, introduzca otro número: ";
                cin >> a;
            }
            cout << "El número " << a << " es impar." << endl;
        } 
        else if (opcion == 3) {
            cout << "Terminando programa..." << endl;
            break;
        } 
        else {
            cout << "Opción no disponible." << endl;
        }
    }

    return 0;
}