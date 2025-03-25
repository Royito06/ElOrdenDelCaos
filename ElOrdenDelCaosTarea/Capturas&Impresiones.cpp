#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include "MoverCursor.h"
#include "Capturas&Impresiones.h"
#include "VariablesGlobales.h"
#include "CapturaSegura.tpp"

using std::cin;
using std::cout;
using std::endl;

void GenerarArreglo(int data[], int num) {
    cout << "Ingrese " << num << " elementos [0-20]:\n";
    for (int i = 0; i < num; i++) {

        do{
        cout << "Elemento[" << i + 1 << "]: ";
        cin >> data[i];
        }while(!capturaSegura(data)||data[i]>20||data[i]<0);
    }
}
//****************************************************************************************************************
void GenerarArregloRand(int arreglo[],int n)
{
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        arreglo[i]=(rand()%20)+1;
    }
}
//****************************************************************************************************************
void ImprimirHistograma(int arreglo[],int n)
{
    sleep(1);
    system("CLS");
    int alturaMax=20;
    cout<<endl<<endl;
    for (int i=alturaMax;i>0;i--)
    {

        for(int j=0;j<n;j++)
        {
            if(arreglo[j]>=i)
            {
                cout<<"\333";
            }else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }



}
//****************************************************************************************************************
void ImprimirArreglos(int arreglo[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout <<arreglo[i]<<", ";
    }
}
