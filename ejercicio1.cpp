// Crea un cajero que simule un Cajero Automático
// 1. Consultar Saldo
// 2. Depositar Saldo
// 3. Retirar Dinero
// 4. Salir
// Al iniciar el saldo será de $500
// Para depositar, el usuario debe ingresar el monto y sumarlo al saldo.
// Para retirar, el usuario debe ingresar el monto y verificar el saldo que sea suficiente
// El programa debe ejecutarse automaticamente hasta que el usuario elija salir

#include <iostream>
#include <cstdlib>
using namespace std;
//Variable global inicializada en 500
float saldo = 500;

//Función para limpiar la pantalla del cajero
void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
}

void menuOpciones(int option);

int main(){
    
    //Declarando variable del menu, inicia en -1 y usando la sentencia DO-WHILE se ejecutará al menos una vez
    int opcion;

    //Estructura de control hasta que la opcion sea 4 = salir;
    do{
        cout<<endl;
        cout<<endl;
        cout<<"     ***** CAJERO AUTOMATICO *****     "<<endl;
        cout<<" 1.  Consultar Saldo"<<endl;
        cout<<" 2.  Depositar Dinero"<<endl;
        cout<<" 3.  Retirar Dinero"<<endl;
        cout<<" 4.  Salir "<<endl;
        cout<<endl;
        cout<<"Ingrese una opcion: ";
        //Leyendo la variable opcion
        cin>>opcion;
        menuOpciones(opcion);
    } while(opcion != 4);
    
    
    return 0;
}

void menuOpciones(int option)
{
    switch (option)
    {
    
        case 1:
        cout<<endl;
        cout<<endl;
        cout<<"Su saldo es: "<<saldo<<endl;
        cout<<endl;
        system("read -p 'Presiona enter para continuar '");
        limpiarPantalla();
        break;

        case 2: {
            cout<<endl;
            cout<<endl;
            //Declarando variable para deposito
            float deposito = 0;
            cout<<"Ingrese la cantidad a depositar: ";
            // Leyendo la cantidad a depositar
            cin>>deposito;
            // Sumando el deposito al saldo
            saldo = saldo + deposito;
            cout<<endl;
            cout<<"Deposito efectuado correctamente !"<<endl;
            cout<<endl;
            system("read -p 'Presiona enter para continuar '");
            limpiarPantalla();
            break;
        }
        case 3: {
            cout<<endl;
            cout<<endl;
            //Declarando la variable para el retiro
            float retiro = 0;
            cout<<"Ingrese la cantidad a retirar: ";
            //Leyendo la cantidad a retirar
            cin>>retiro;
            cout<<endl;
            // Comparando si el retiro es menor al saldo y efectuando el retiro
            if(retiro <= saldo){
                saldo = saldo - retiro;
                cout<<"Retiro efectuado correctamente !"<<endl;
            }
            else{
                cout<<"No tiene fondos suficientes para el retiro !"<<endl;
            }
            cout<<endl;
            system("read -p 'Presiona enter para continuar '");
            limpiarPantalla();
            break;
        }    
        default:
        cout<<endl;
        cout<<"Gracias por usar nuestro servicio, que tenga un buen dia !"<<endl;
        break;
    }
}