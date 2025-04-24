// Desarrolla un programa que pida al usuario un número n y luego
// imprima todos los números divisibles por 3 y 5 en el rango de 1 a n.
// Utiliza una estructura de repetición para iterar sobre los números.
// Consideraciones:
// • El ciclo debe verificar si cada número es divisible por 3 y 5.
// • Imprime todos los números que cumplan la condición hasta
// llegar a n.
#include <iostream>
using namespace std;

int main(){

    //Declarando variable para saber hasta que rango encontrar los números
    int num;

    cout<<"     ***** Divisibles para 3 y 5 *****"<<endl;
    cout<<endl;
    cout<<"Ingrese un número: ";
    //Leyendo num
    cin>>num;
    cout<<endl;
    cout<<"Numeros divisibles por 3 y 5 : ";
    //Estructura de repetición para avanzar 1 por 1
    for(int i = 1; i <= num; i++){

        // Estreuctura de control simple para saber si son dibisivles para 3 y 5 (% para saber si el residuo es 0)
        if( i % 3 == 0 && i % 5 == 0){
            // Si se cumple la condicion se imprime el mensaje
            cout<<i<<" ";
        }
    }

    return 0;
}