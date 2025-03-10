#include<iostream>
#include <map>
#include <string>

using namespace std;
int main(){
    //crear mapa para almacenar los dartos del usuario
    map<string,string>usuario;

    //solicitar informacion alm ususario
    cout<<"ingrese su nombre: ";
    string nombre;
    getline(cin, nombre);//leer toda la lionea con espacios
    usuario["Nombre"]=nombre;

    cout<<"ingrese su edad: ";
    string edad;
    getline(cin, edad);
    usuario["Edad"]=edad;

    cout<<"ingrese su ciudad: ";
    string ciudad;
    getline(cin, ciudad);
    usuario["Ciudad"]=ciudad;
    //mostrar la informacion agregada
    cout<<"\n -----informacion agregada-------\n";
    for(const auto & dato: usuario){
        cout<<dato.first<<": "<<dato.second<<endl;

    }

    return 0;

}