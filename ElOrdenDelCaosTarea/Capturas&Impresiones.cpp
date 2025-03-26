#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include "MoverCursor.h"
#include "Capturas&Impresiones.h"
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

    /*for (int i=alturaMax;i>0;i--)
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

    }*/

    int x=4;
    int y=4;

    int alturaMax=20;
    for(int nivel=alturaMax;nivel>0;nivel--)
    {
        MoverCursor(x, y + (alturaMax - nivel));
        for(int columna=0;columna<n;columna ++)
        {
            if(arreglo[columna]>=nivel)
            {
                cout<<"* ";
            }else{
                cout<<"  ";
            }

        }
    }
    //sleep(1);  // Pausa para visualización
/*
    int alturaMaxima=20;
    for (int nivel = alturaMaxima; nivel > 0; nivel--) {
        MoverCursor(x, y + (alturaMaxima - nivel));  // Ajustar posición vertical
        for (int columna = 0; columna < n; columna++) {
            if (arreglo[columna] >= nivel) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }*/



}
//****************************************************************************************************************
void ImprimirArreglos(int arreglo[], int n)
{



    for (int i=0;i<n;i++)
    {
        cout <<arreglo[i]<<", ";
    }
}

