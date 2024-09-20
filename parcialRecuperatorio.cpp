#include <iostream>
#include <iomanip>

using namespace std;

void calculadoraPonderada(){
    int cantidadDeMaterias;

    double sumaDeNotasPonderadas = 0;
    double sumaDePonderaciones = 0;

    cout << "Ingresar la cantidad de materias: ";
    cin >> cantidadDeMaterias;

    for(int i = 0; i < cantidadDeMaterias; i++){
        char nombreDeLaMateria;
        float notaMateria;
        float ponderacionDeMateria;
        cout << "Ingresa el nombre de la materia (A, B, C, D, ...): ";
        cin >> nombreDeLaMateria;

        cout << "Ingrese la nota de la materia " << nombreDeLaMateria << ": ";
        cin >> notaMateria;
        cout << endl;

        cout << "Ingrese un numero entero positivo de la ponderacion de la materia " << nombreDeLaMateria << "(% de la nota): ";
        cin >> ponderacionDeMateria;
        cout << endl;

        sumaDeNotasPonderadas = sumaDeNotasPonderadas + (notaMateria * ponderacionDeMateria);
        sumaDePonderaciones = sumaDePonderaciones + ponderacionDeMateria;

    }
    double promedioPonderado = sumaDeNotasPonderadas / sumaDePonderaciones;
    cout << fixed << setprecision(2) << "El promedio ponderado final es: " << promedioPonderado << endl;

}

int main(){

    int menuOpcion;

    do{
        cout << "------> Bienvenido al menu <------" << endl;
        cout << "1. Calculadora Ponderaciones." << endl;
        cout << "4. Salir." << endl;
        cout << "Escribe una opcion: ";
        cin >> menuOpcion;

        if(menuOpcion <= 0){
            cout << "Ingrese un numero valido:";
        }

        switch(menuOpcion){
            case 1:{
                calculadoraPonderada();
            break;
            }
            default:{
                cout << "Chau gorito!.";
            }

        }
    }while(menuOpcion != 4);

    return 0;

    cout << endl;
}
