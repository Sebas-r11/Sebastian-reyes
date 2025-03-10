#include <iostream>
#include <vector>

using namespace std;

class Usuario {
private:
    string nombre;
    int pin;
    double saldo;

public:
    Usuario(string nombre, int pin, double saldo) {
        this->nombre = nombre;
        this->pin = pin;
        this->saldo = saldo;
    }

    string getNombre() { return nombre; }
    int getPin() { return pin; }
    double getSaldo() { return saldo; }

    void restarSaldo(double cantidad) { saldo -= cantidad; }
};

class Banco {
private:
    vector<Usuario> usuarios;

public:
    Banco(vector<Usuario> usuarios) {
        this->usuarios = usuarios;
    }

    Usuario* autenticar(string nombre, int pin) {
        for (auto &usuario : usuarios) {
            if (usuario.getNombre() == nombre) {
                if (usuario.getPin() == pin) {
                    cout << "¡Estás logueado!" << endl;
                    return &usuario;
                } else {
                    cout << "Pin o nombre incorrecto." << endl;
                    return nullptr;
                }
            }
        }
        cout << "El usuario no existe." << endl;
        return nullptr;
    }

    void sacarDinero(Usuario* usuario, double cantidad) {
        if (usuario->getSaldo() < cantidad) {
            cout << "Saldo insuficiente." << endl;
        } else {
            usuario->restarSaldo(cantidad);
            cout << "El saldo disponible es: " << usuario->getSaldo() << endl;
        }
    }
};

int main() {
    // Crear usuarios
    Usuario ana("Ana", 9872, 450);
    Usuario pablo("Pablo", 5555, 200);
    Usuario rodrigo("Rodrigo", 2222, 900);

    // Crear banco con usuarios
    Banco banco({ana, pablo, rodrigo});

    while (true) {
        cout << "Bienvenido al Banco, por favor, identifíquese." << endl;
        cout << "Introduzca su nombre: ";
        string nombre;
        cin >> nombre;

        cout << "Introduzca su pin: ";
        int pin;
        cin >> pin;

        Usuario* usuarioAutenticado = banco.autenticar(nombre, pin);

        if (usuarioAutenticado) {
            while (true) {
                cout << "Por favor, elija una opción:\n1. Sacar dinero\n2. Terminar sesión" << endl;
                string opcion;
                cin >> opcion;

                if (opcion == "1") {
                    cout << "Introduce cantidad a sacar: ";
                    double cantidad;
                    cin >> cantidad;
                    banco.sacarDinero(usuarioAutenticado, cantidad);
                } else if (opcion == "2") {
                    cout << "Saliendo del sistema." << endl;
                    break;
                } else {
                    cout << "Opción incorrecta. Por favor, introduzca otra opción." << endl;
                }
            }
        } else {
            cout << "Usuario no autenticado. Por favor, introduzca nombre y pin correctos." << endl;
        }
    }

    return 0;
}
