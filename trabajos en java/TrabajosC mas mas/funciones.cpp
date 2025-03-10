#include<iostream>
#include<map>

using namespace std;
//funcion para agregar un elemento al diccionario
void agregar(map<string, int>& edades, string nombre, int edad){
    edades[nombre]=edad;
}
//funcion para mostar diccionario
void mostrar(const map<string, int>& edades){
cout<<"lista de edades" <<endl;

  for (const auto & par:edades){
    cout<<par.first<<" tiene "<< par.second<<" años "<<endl;
}
}

int main(){
map<string, int>edades;
//Agregar datos mediante la funcion agregar
agregar(edades, "juan", 25);
agregar(edades, "pedro", 30);
agregar(edades, "julian", 18);
agregar(edades, "andres", 40);

//mostrar datos mediante la funcion mostrar
mostrar(edades);

return 0;

}