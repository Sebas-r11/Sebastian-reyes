#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 4;
    cout << "La primera variable es: " << a << endl;
    cout << "El signo de la operación es: * " << endl;
    cout << "La segunda variable es: " << b << endl;
    int c = a * b;
    cout << "El resultado es: " << c << endl;
    cout << "Tipo de dato: int" << endl; 

    cout << "La primera variable es: " << a << endl;
    cout << "El signo de la operación es: / " << endl;
    cout << "La segunda variable es: " << b << endl;
    double d = (double)a / b;
    cout << "El resultado es: " << d << endl;
    cout << "Tipo de dato: double" << endl; 

    cout << "La primera variable es: " << a << endl;
    cout << "El signo de la operación es: + " << endl;
    cout << "La segunda variable es: " << b << endl;
    c = a + b;
    cout << "El resultado es: " << c << endl;
    cout << "Tipo de dato: int" << endl; 

    cout << "La primera variable es: " << a << endl;
    cout << "El signo de la operación es: - " << endl;
    cout << "La segunda variable es: " << b << endl;
    c = a - b;
    cout << "El resultado es: " << c << endl;
    cout << "Tipo de dato: int" << endl; 

    cout << "La primera variable es: " << a << endl;
    cout << "El signo de la operación es: ** (potencia en C++ usa pow)" << endl;
    cout << "La segunda variable es: " << b << endl;
    double e = pow(a, b);
    cout << "El resultado es: " << e << endl;
    cout << "Tipo de dato: double" << endl; 

    cout << "La primera variable es: " << a << endl;
    cout << "El signo de la operación es: % " << endl;
    cout << "La segunda variable es: " << b << endl;
    c = a % b;
    cout << "El resultado es: " << c << endl;
    cout << "Tipo de dato: int" << endl; 

    return 0;
}