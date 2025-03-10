#include <iostream>
#include <vector>
#include <string>

using namespace std;

void jugar_mundial(vector<string> equipos) {
    vector<string> fases = {"Octavos de final", "Cuartos de final", "Semifinal", "Final"};

    while (equipos.size() > 1) {
        string fase = fases.front();
        fases.erase(fases.begin());
        
        cout << "\n" << fase << endl;

        vector<string> ganadores;
        for (size_t i = 0; i < equipos.size(); i += 2) {
            string equipo1 = equipos[i];
            string equipo2 = equipos[i + 1];

            cout << equipo1 << " vs " << equipo2 << endl;

            int goles1, goles2;
            cout << "Goles de " << equipo1 << ": ";
            cin >> goles1;
            cout << "Goles de " << equipo2 << ": ";
            cin >> goles2;

            if (goles1 > goles2) {
                ganadores.push_back(equipo1);
            } else {
                ganadores.push_back(equipo2);
            }
        }

        equipos = ganadores;
    }

    cout << "\n¡" << equipos[0] << " es el campeón del mundial!" << endl;
}

int main() {
    vector<string> equipos = {
        "Brasil", "Argentina", "Francia", "Alemania", "España", "Inglaterra", "Portugal", "Holanda",
        "Uruguay", "Bélgica", "Croacia", "México", "EEUU", "Senegal", "Japón", "Corea del Sur"
    };

    jugar_mundial(equipos);

    return 0;
}