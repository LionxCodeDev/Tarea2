// Escribe un programa que simule una votación. El programa debe permitir a los usuarios votar por tres opciones:
// 1 para "Candidato A"
// 2 para "Candidato B"
// 3 para "Candidato C"
// 0 para terminar la votación

// El programa debe:
// 1. Contar los votos de cada candidato.
// 2. Al finalizar la votación, mostrar los resultados de la elección.
// El ciclo debe continuar hasta que el usuario ingrese 0 para terminar

#include <iostream>
#include <cstdlib>
using namespace std;

//Declarando variables globales para contar los votos
int a=0,b=0,c=0;

//Codigo para limpiar pantalla dependiendo del sistema operativo
void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
}

void menuOpciones(int option)
{
    // Estructura de control dependiendo de la opcion
    switch (option)
    {
    
        case 1:
            cout<<endl;
            cout<<endl;
            //Incrementando la variable por el voto A
            a++;
            cout<<"Usted ha votado por el candidato A"<<endl;
            cout<<endl;
            system("read -p 'Presiona enter para continuar '");
            limpiarPantalla();
            break;

        case 2: {
            cout<<endl;
            cout<<endl;
             //Incrementando la variable por el voto B
            b++;
            cout<<"Usted ha votado por el candidato B"<<endl;
            cout<<endl;
            system("read -p 'Presiona enter para continuar '");
            limpiarPantalla();
            break;
        }
        case 3: {
            cout<<endl;
            cout<<endl;
            //Incrementando la variable por el voto C
            c++;
            cout<<"Usted ha votado por el candidato C"<<endl;
            cout<<endl;
            system("read -p 'Presiona enter para continuar '");
            limpiarPantalla();
            break;
        }    
        default:
            limpiarPantalla();
            cout<<endl;
            cout<<"Conteo de votos finalizado"<<endl;
            cout<<endl;
            //Impresion del total de los votos por candidato
            cout<<"   CANDIDATO A     CANDIDATO B     CANDIDATO C"<<endl;
            cout<<"        "<<a<<"                "<<b<<"              "<<c<<endl;
            break;
    }
}

int main(){
    //Declarando la variable para seleccion del menú
    int opcion;
    // Estructura de repeticion se ejecuta mientras la opcion sea diferente de 0
    do{
        cout<<endl;
        cout<<endl;
        cout<<"     ***** CONTEO DE VOTOS *****     "<<endl;
        cout<<" 1.  Candidato A"<<endl;
        cout<<" 2.  Candidato B"<<endl;
        cout<<" 3.  Candidato C"<<endl;
        cout<<" 0.  Salir "<<endl;
        cout<<endl;
        cout<<"Escoja un candidato: ";
        //Leyendo la variable opcion
        cin>>opcion;
        menuOpciones(opcion);
    } while(opcion != 0);

    return 0;
}