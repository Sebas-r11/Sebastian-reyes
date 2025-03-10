#include <iostream>
#include <map>

using namespace std;

int main(){
    //declarar diciionario con mapa con una clave string y valor int
    map<string,int>edades;

    //Agregar elementos alñ diciionario
    edades["juan"]=25;
    edades["pedro"]=30;
    edades["andres"]=23;
    //imprimir los valores del dicionario usando el ciclo for
    cout<<"lista de edades"<<endl;
    for (const auto & par:edades){
        cout<<par.first<<" tiene "<<par.second<<" años "<<endl;
    }
    return 0;
    
}