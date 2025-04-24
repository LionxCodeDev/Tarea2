// Crea un programa que permita simular diferentes métodos de pago en
// un sistema de compras. El menú debe ofrecer las siguientes opciones:
// 1. Pagar con tarjeta de crédito.
// 2. Pagar con tarjeta de débito.
// 3. Pagar en efectivo.
// 4. Salir.
// Según la opción seleccionada, el programa debe pedir al usuario el
// monto total de la compra y realizar el cálculo del pago:
// • Para tarjeta de crédito: Se aplica una comisión del 5%.
// • Para tarjeta de débito: No se aplica comisión.
// • Para pago en efectivo: Se aplica un descuento del 2%.
// El ciclo debe continuar hasta que el usuario decida salir.
// Consideraciones:
// • Al final de cada operación, el programa debe mostrar el monto
// total después de aplicar el descuento o la comisión, según
// corresponda.
// • Al elegir salir, el programa debe finalizar la ejecución.

#include <iostream>
#include <cstdlib>
using namespace std;

//Codigo para limpiar pantalla dependiendo del sistema oeprativo
void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
}

void menuOpciones(int option)
{
    // Declarando la variable del monto total del pago
    float monto = 0;

    // Estructura de control dependiendo de la opcion
    switch (option)
    {
        case 1:
            cout<<endl;
            cout<<endl;
            cout<<"Ingrese el monto total de compra: ";
            // Leyendo el monto total por teclado
            cin>>monto;
            cout<<endl;

            //Aplicando la comision del 5%
            monto = (monto * 0.05) + monto;
            cout<<"El monto total a pagar con tarjeta de credito es: $"<<monto<<endl;
            cout<<endl;
            system("read -p 'Presiona enter para continuar '");
            break;

        case 2: {
            cout<<endl;
            cout<<endl;
            cout<<"Ingrese el monto total de compra: ";
            // Leyendo el monto total por teclado
            cin>>monto;
            cout<<endl;

            cout<<"El monto total a pagar con tarjeta de debito es: $"<<monto<<endl;
            cout<<endl;
            system("read -p 'Presiona enter para continuar '");
            break;
        }
        case 3: {
            cout<<endl;
            cout<<endl;
            cout<<"Ingrese el monto total de compra: ";
            // Leyendo el monto total por teclado
            cin>>monto;
            cout<<endl;

            //Aplicando el descuento del 2%
            monto = monto - (monto * 0.02);
            cout<<"El monto total a pagar con efectivo es: $"<<monto<<endl;
            cout<<endl;
            system("read -p 'Presiona enter para continuar '");
           
            break;
        }    
        default:
            cout<<endl;
            cout<<"Gracias por usar nuestro sistema de compras !"<<endl;
            cout<<endl;
            break;
    }
}

int main(){
    //Declarando la variable para seleccion del menú
    int opcion;
    // Estructura de repeticion se ejecuta mientras la opcion sea diferente de 4
    do{
        limpiarPantalla();
        cout<<endl;
        cout<<endl;
        cout<<"     ***** SISTEMA DE COMPRAS *****     "<<endl;
        cout<<endl;
        cout<<" 1.  Tarjeta de credito"<<endl;
        cout<<" 2.  Tarjeta de debito"<<endl;
        cout<<" 3.  Efectivo"<<endl;
        cout<<" 4.  Salir "<<endl;
        cout<<endl;
        cout<<"Ingrese una opcion: ";
        //Leyendo la variable opcion
        cin>>opcion;
        menuOpciones(opcion);
    } while(opcion != 4);

    return 0;
}