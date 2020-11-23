#include <iostream>
#include "listadobleligada.h"
using namespace std;

//--- No modificar el main ya que es necesario para
//------ la prueba de GitHub Classroom
//--- Puede comentarse para hacer sus
//------- propias pruebas

int main() {
    ListaDobleLigada<int> enteros;

    enteros.push_front(1);           // insertar al inicio (frente)
    enteros.push_front(2);           // insertar al inicio (frente)
    enteros.push_front(3);           // insertar al inicio (frente)

    enteros << 4 << 5 << 6;          // insertar al final (cola)

    cout << enteros.size() << endl;  // imprime la cantidad de nodos (elementos)

    enteros.insert(0, 1);            // insertar el 0 después del primer nodo

    enteros.print();                 // imprime el elemento de cada nodo

    int *ptr_01 = enteros.buscar(1); // buscar un elemento
    if (ptr_01) {                    // si no es nulo
        *ptr_01 = 3;                 // cambiar valor
    }

    int *ptr_02 = enteros.buscar(3); // buscar un elemento
    if (ptr_02) {                    // si no es nulo
        *ptr_02 = -1;                // cambiar valor
    }

    cout << enteros.size() << endl;  // imprime la cantidad de nodos (elementos)

    enteros.erase(5);                // elimina el sexto nodo (penultimo de la lista de enteros)

    enteros.print();                 // imprime el elemento de cada nodo
    
    return 0;
}