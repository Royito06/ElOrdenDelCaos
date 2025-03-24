#include <iostream>
#include <ctime>
#include "Capturas&Impresiones.h"
#include "VariablesGlobales.h"
#include "Ordenamientos.h"
#include "CapturaSegura.tpp"

#define MAX 100
#define MIN 10

using std:: cin;
using std:: cout;
using std:: endl;




int main() {

    srand(time(NULL));

    int num, op, modo;

    do {
        cout << "\n=== MENU DE ORDENAMIENTO ===\n";
        cout << "1) Burbuja\n";
        cout << "2) Burbuja Bidireccional\n";
        cout << "3) Selecci\242n\n";
        cout << "4) Inserci\242n\n";
        cout << "5) Inserci\242n con intervalos decrecientes\n";
        cout << "6) Ordenamiento Rapido (QuickSort)\n";
        cout << "7) Mezcla (MergeSort)\n";
        cout << "0) Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> op;
        cout<<"\n";
        if (op != 0) {
            do{
            cout << "Introduzca el n\243mero de datos que desea ordenar [10-" << MAX << "]: ";
            cin >> num;
            cout<<"\n";
            }while(num <=MIN  || num > MAX||!capturaSegura(num));


            int data[num];
            do{
            cout << "Como desea ingresar los numeros?"<<endl<<"(1) Manualmente"<<endl<<"(2) Aleatoriamente ";
            cin >>  modo;
            cout<<"\n";
            }while(!capturaSegura(modo)||modo<1||modo>2);

            if (modo == 1) {
                GenerarArreglo(data, num);
            } else {
                GenerarArregloRand(data, num);
            }

            cout << "Orden inicial:\n";
            ImprimirArreglos(data, num);
            cout<<"\n";

            switch (op) {
                case 1:
                    bubble(data, num);
                    break;
                case 2:
                    BubbleBidirecccional(data, num);
                    break;
                case 3:
                    seleccion(data, num);
                    break;
                case 4:
                    insercion(data, num);
                    break;
                case 5:
                    ShellSort(data,num);
                    break;
                case 6:
                    QuickSort(data,0,num-1,num);
                    break;
                case 7:
                    MergeSort(data,num);
                    break;
                default:
                    cout << "Opcion no v\240lida.\n";
            }

            cout << "Datos ordenados:\n";
            ImprimirArreglos(data, num);
        }
        cout<<"\n";
        system("pause");
        system("cls");

    } while (op != 0||!capturaSegura(op));

    cout << "Programa finalizado.\n";
    return 0;
}

