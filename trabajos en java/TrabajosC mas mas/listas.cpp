#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>numeros={10, 20, 30, 40, 50};//lista de enteros

    //agregar elemenos al inicio y al final
    numeros.push_front(5);
    numeros.push_back(60);

    //recortar listas e imprimir los elementos
    cout<<"lista de numeros";
    for(int num : numeros){
        cout<<num <<" ";
    }
    




}