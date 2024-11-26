#include<bits/stdc++.h>

using namespace std;

//
struct Persona {
    int cedula;
    string nombre;
    bool vive;
};



int main(){

    Persona a;
    a.cedula = 21555555;
    a.nombre = "Juanito";
    a.vive = true;
    cout << a.cedula << " "<< a.nombre << a.vive <<endl;

    Persona muchaspersonas[100];
    muchaspersonas[0].cedula = 454545;

    for(int i=0;i<100;i++){
        muchaspersonas[i].cedula = i;
        muchaspersonas[i].nombre = "Juanito" + std::to_string(i);
    }

    for(int i=0;i<100;i++){
        cout<< muchaspersonas[i].cedula << " " << muchaspersonas[i].nombre <<endl;
    }

}