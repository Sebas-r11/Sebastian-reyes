#include <iostream>
#include <vector>

using namespace std;

// Estructura para almacenar datos de una persona
struct Persona {
    string nombre;
    int edad;
};

int main() {
    // Lista de nombres
    vector<string> name = {"Ana", "Pablo", "Diego", "Carmen"};

    // Lista de personas usando estructura
    vector<Persona> person;
    
    // Agregar personas a la lista
    person.push_back({"Ana", 28});
    person.push_back({"Pablo", 35});
    person.push_back({"Luis", 38});

    // Mostrar nombres y edades
    for (const auto& person1 : person) {
        cout << "Nombre: " << person1.nombre << endl;
        cout << "Edad: " << person1.edad << endl;
    }

    // Crear lista de nombres desde la lista de personas
    vector<string> lista_name;
    for (const auto& person2 : person) {
        lista_name.push_back(person2.nombre);
    }

    // Mostrar lista de nombres
    cout << "Lista de nombres: ";
    for (const auto& nombre : lista_name) {
        cout << nombre << " ";
    }
    cout << endl;

    // Lista de números
    vector<int> numbers = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < numbers.size(); i++) {
        numbers[i] += 3;
    }

    // Mostrar lista de números
    cout << "Lista de números: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}