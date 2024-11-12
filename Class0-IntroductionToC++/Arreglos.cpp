#include<bits/stdc++.h>

using namespace std;

int main(){

    // va desde 0 hasta 9
    int arreglo[10]; // Declaracion de un arreglo de 10 elementos

    int arreglo2[] = {10,52,8743,4,5}; // Declaracion e inicializacion de un arreglo de 5 elementos

    arreglo[0] = 5; // Asignacion de un valor a un elemento del arreglo

    arreglo2[0] = 100; // Asignacion de un valor a un elemento del arreglo

    // Acceso a los elementos de un arreglo
    cout << arreglo2[0] << endl; // Imprime el primer elemento del arreglo

    //nota: siempre inicializar las variables antes de usarlas
    cout<< arreglo[1] << endl; // Imprime el segundo elemento del arreglo

    //cout << arreglo[10] << endl; // posicion invalida
    //cout << arreglo[11] << endl; // posicion invalida
    //cout << arreglo[12] << endl; // posicion invalida
    //cout << arreglo[1000] << endl; // posicion invalida

    // un gran poder conlleva una gran responsabilidad 

    //
    int n= 50;

    int arreglo3[n]; // Declaracion de un arreglo de 50 elementos

    for(int i = 0; i < n; i++){
        arreglo3[i] = i+3*5;
    }

    for(int i = 0; i < n; i++){
        cout << arreglo3[i] << " ";
    }
    cout << endl;
    int m = 5;
    int arreglo4[m]; // Declaracion de un arreglo de 5 elementos

    for (int i = 0; i < m; i++){
        cin >> arreglo4[i];
    }

    for (int i = 0; i < m; i++){
        cout << arreglo4[i] << " ";
    }
    cout << endl;
    for (int i = m-1;i>=0;i--){
        cout << arreglo4[i] << " ";
    }
}