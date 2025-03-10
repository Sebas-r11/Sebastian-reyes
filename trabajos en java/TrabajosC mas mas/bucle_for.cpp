#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    // Lista de nombres
    vector<string> name = {"Ana", "Pablo", "Diego", "Carmen"};

    // Lista de diccionarios usando un vector de mapas
    vector<map<string, int>> person;

    map<string, int> a = {{"Ana", 28}};
    map<string, int> b = {{"Pablo", 35}};
    map<string, int> c = {{"Luis", 38}};

    person.push_back(a);
    person.push_back(b);
    person.push_back(c);

    // Mostrar nombres y edades
    for (const auto& person1 : person) {
        for (const auto& p : person1) {
            cout << "Nombre: " << p.first << endl;
            cout << "Edad: " << p.second << endl;
        }
    }

    // Crear lista de nombres
    vector<string> lista_name;
    for (const auto& person2 : person) {
        for (const auto& p : person2) {
            lista_name.push_back(p.first);
        }
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

    // Mostrar números modificados
    cout << "Lista de números: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}