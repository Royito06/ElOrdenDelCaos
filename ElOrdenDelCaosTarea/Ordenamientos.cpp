#include <iostream>

#include "Capturas&Impresiones.h"
#include "VariablesGlobales.h"
#include "Ordenamientos.h"

using std::cin;
using std::cout;
using std::endl;
using std::swap;

//****************************************************************************************************************
void bubble(int data[], int num) {
    bool intercambiar;
    for (int i = 0; i < num; i++) {
        intercambiar = false;
        for (int j = 0; j < num - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
                intercambiar = true;
            }
        }
        if (!intercambiar) break;
        ImprimirHistograma(data,num);
    }
}

//****************************************************************************************************************

void BubbleBidirecccional(int data[], int num) {
    int inicio = num - 1;  // Comienza desde el final
    int fin = 0;           // Termina en el inicio
    int aux, nindice, nfin, ninicio, c = 0;

    while (inicio >= fin) {  // Cambia la condici�n a inicio >= fin
        // Primera pasada: de inicio a fin (busca el n�mero m�s peque�o)
        for (int i = inicio; i > fin; i--) {
            if (data[i] < data[i - 1]) {  // Cambia la comparaci�n a <
                aux = data[i];
                data[i] = data[i - 1];
                data[i - 1] = aux;
                c++;
                nfin = i;
            }
        }
        if (c == 0) {
            break;  // Si no hubo intercambios, el array est� ordenado
        }
        fin = nfin;  // Actualiza el l�mite inferior
        c = 0;

        ImprimirHistograma(data,num);

        // Segunda pasada: de fin a inicio (busca el n�mero m�s grande)
        for (int j = fin; j < inicio; j++) {
            if (data[j] > data[j + 1]) {  // Cambia la comparaci�n a >
                aux = data[j];
                data[j] = data[j + 1];
                data[j + 1] = aux;
                c++;
                ninicio = j;
            }
        }
        if (c == 0) {
            break;  // Si no hubo intercambios, el array est� ordenado
        }
        inicio = ninicio;  // Actualiza el l�mite superior
        c = 0;

        ImprimirHistograma(data,num);
    }
}

//****************************************************************************************************************

void seleccion(int data[], int num) {
    int aux, min;
    for (int i = 0; i < num; i++) {
        min = i;
        for (int j = i + 1; j < num; j++) {
            if (data[j] < data[min]) {
                min = j;
            }
        }
        aux = data[i];
        data[i] = data[min];
        data[min] = aux;

        ImprimirHistograma(data,num);
    }
}

//****************************************************************************************************************

void insercion(int data[], int num) {
    int aux, b;
    for (int i = 0; i < num; i++) {
        b = i;
        aux = data[i];

        while ((b > 0) && (data[b - 1] > aux)) {
            data[b] = data[b - 1];
            b--;
        }
        data[b] = aux;
        ImprimirHistograma(data,num);
    }
}
//****************************************************************************************************************
void ShellSort(int arreglo[], int n)
{

}
//****************************************************************************************************************
void QuickSort(int arreglo[], int primero, int ultimo, int n)
{
    if(primero<ultimo)
    {
    int pivote=Particion(arreglo,primero,ultimo,n);



    QuickSort(arreglo,primero,pivote-1,n);//subdivision izq
    QuickSort(arreglo,pivote+1,ultimo,n);//subdivision derecha
    }


}

int Particion(int arreglo[], int primero, int ultimo,int n)
{
    int pivote=arreglo[ultimo];
    int i=primero-1;

    for (int j=primero; j<ultimo;j++)
    {
        if(arreglo[j]<=pivote)
        {
            i++;
            swap(arreglo[i], arreglo[j]);
        }
    }
    swap(arreglo[i+1],arreglo[ultimo]);

    ImprimirHistograma(arreglo, n- 1);

    return i+1;

}
//****************************************************************************************************************
void MergeSort(int arreglo[],int primero,int ultimo, int num)
{
    if(primero<ultimo)
    {
        int ValorMedio=primero+(ultimo-primero)/2;

        MergeSort(arreglo,primero,ValorMedio,num);//divide la izquierda
        MergeSort(arreglo,ValorMedio+1,ultimo,num);//divide la derecha



        Mezclar(arreglo,primero,ValorMedio,ultimo);//Se mezclan las mitades ya ordenadas

        ImprimirHistograma(arreglo, num);

    }
}

void Mezclar(int arreglo[], int primero, int medio, int ultimo)
{
    // 1. Determinar tamaños de los subarreglos
    int n1 = medio - primero + 1; // Tamaño mitad izquierda
    int n2 = ultimo - medio;      // Tamaño mitad derecha

    // 2. Crear arreglos temporales
    int L[n1], R[n2];

    // 3. Copiar datos a los temporales
    for(int i = 0; i < n1; i++)
        L[i] = arreglo[primero + i];
    for(int j = 0; j < n2; j++)
        R[j] = arreglo[medio + 1 + j];

    // 4. Fusionar los temporales en el arreglo original
    int i = 0;    // Índice inicial del primer subarreglo
    int j = 0;    // Índice inicial del segundo subarreglo
    int k = primero; // Índice inicial del arreglo mezclado

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arreglo[k] = L[i];
            i++;
        }
        else
        {
            arreglo[k] = R[j];
            j++;
        }
        k++;
    }

    // 5. Copiar elementos restantes de L[] si los hay
    while(i < n1)
    {
        arreglo[k] = L[i];
        i++;
        k++;
    }

    // 6. Copiar elementos restantes de R[] si los hay
    while(j < n2)
    {
        arreglo[k] = R[j];
        j++;
        k++;
    }
}
