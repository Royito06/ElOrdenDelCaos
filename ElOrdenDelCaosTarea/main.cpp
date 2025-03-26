#include <iostream>
#include <ctime>
#include "Capturas&Impresiones.h"
#include "Ordenamientos.h"
#include "CapturaSegura.tpp"

#define MAX 50
#define MIN 10

using std:: cin;
using std:: cout;
using std:: endl;




int main() {

    srand(time(NULL));

    int num, op, modo;

    do {
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
            cout << "\n";
        } while (!capturaSegura(op));

        if (op != 0) {

            do {
                cout << "Introduzca el n\243mero de datos que desea ordenar [10-" << MAX << "]: ";
                cin >> num;
                cout << "\n";
            } while (!capturaSegura(num) || num < MIN || num > MAX);

            int data[num];

            do {
                cout << "Como desea ingresar los numeros?" << endl
                     << "(1) Manualmente" << endl
                     << "(2) Aleatoriamente ";
                cin >> modo;

            } while (!capturaSegura(modo) || modo < 1 || modo > 2);

            if (modo == 1) {
                GenerarArreglo(data, num);
            } else {
                GenerarArregloRand(data, num);
            }

            cout << "Orden inicial:\n";
            ImprimirArreglos(data, num);
            cout << "\n";

            switch (op) {
                case 1:
                    system("CLS");
                    cout << "Acomodando...";
                    bubble(data, num);
                    break;
                case 2:
                    system("CLS");
                    cout << "Acomodando...";
                    BubbleBidirecccional(data, num);
                    break;
                case 3:
                    system("CLS");
                    cout << "Acomodando...";
                    seleccion(data, num);
                    break;
                case 4:
                    system("CLS");
                    cout << "Acomodando...";
                    insercion(data, num);
                    break;
                case 5:
                    system("CLS");
                    cout << "Acomodando...";
                    ShellSort(data, num);
                    break;
                case 6:
                    system("CLS");
                    cout << "Acomodando...";
                    QuickSort(data, 0, num - 1, num);
                    break;
                case 7:
                    system("CLS");
                    cout << "Acomodando...";
                    MergeSort(data, 0, num - 1, num);
                    break;
                default:
                    cout << "Opcion no v\240lida.\n";
            }
            cout<<endl;
            cout << "Datos ordenados:\n";
            ImprimirArreglos(data, num);
        }
        cout << "\n";
        system("pause");
        system("cls");

    } while (op != 0);

    cout<<endl;
    cout << "Programa finalizado.\n";
    return 0;
}
