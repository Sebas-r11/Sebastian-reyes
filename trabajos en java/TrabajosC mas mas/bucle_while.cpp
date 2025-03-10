#include <iostream>

using namespace std;

int main() {
    // Bucle while con contador
    int contador = 0;
    while (contador < 10) {
        contador++;
        cout << "Iteración " << contador << endl;
    }

    // Bucle infinito con break
    while (true) {
        int a;
        cout << "Introduzca un valor mayor que 5: ";
        cin >> a;

        if (a > 5) {
            cout << "Es correcto" << endl;
        } else {
            cout << "Es incorrecto, pruebe de nuevo" << endl;
            break;
        }
    }

    return 0;
}