#include <iostream>
using namespace std;

void voltaje(){
    double corriente, resistencia;
    cout <<"ingrese la corriente (I) en ampérios: ";
    cin >>corriente;
    cout <<"ingrese la resisteencia (R) en ohmios: ";
    cin>> resistencia;
    cout<<"el voltaje V es: "<<corriente*resistencia<<"v"<<endl;
}
void corriente(){
    double voltaje, resistencia;
    cout<<"ingrese un voltaje en voltios: ";
    cin>>voltaje;
    cout<<"ingrese la resistenci en ohmios: ";
    cin>>resistencia;
    cout<<"la corriente I es"<<voltaje/resistencia<<"ohmios"<<endl;
}
void resistencia(){
    double voltaje, corriente;
    cout<<"Ingrese el voltaje en voltios: ";
    cin>>voltaje;
    cout<<"ingrese la corriente I en amperios: ";
    cin>>corriente;
    cout<<"la resistencia R es: "<<voltaje/corriente<< "ohmios"<<endl;
}
int main(){
    int opcion;
    cout<<"===calculadora de la ley de ohm===\n";
    cout<<"1. Voltaje\n";
    cout<<"2. Corriente\n";
    cout<<"3. Resistencia\n";
    cout<<"Seleciione una opcion de 1 a 3: ";
    cin>>opcion;

    switch (opcion)
    {
    case 1:voltaje();break;
    case 2:corriente();break;
    case 3:resistencia();break;
    default:cout<<"opcion no valida,"<<endl;
    }
    return 0;
}