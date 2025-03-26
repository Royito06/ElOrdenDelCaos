#ifndef ORDENAMIENTOS_H_INCLUDED
#define ORDENAMIENTOS_H_INCLUDED

//*********************************************************************************************************************************
/**
 * La funci�n "bubble" implementa el algoritmo de ordenaci�n de burbuja (bubble sort) para ordenar un arreglo de enteros.
 * Adem�s, llama a una funci�n "ImprimirHistograma" para imprimir un histograma del arreglo en cada iteraci�n.
 *
 * @param data El par�metro `data` es un arreglo de enteros que contiene los elementos a ordenar
 * utilizando el algoritmo de burbuja.
 * @param num El par�metro `num` en la funci�n `bubble` representa el n�mero de elementos en el
 * arreglo `data` que deben ser ordenados. Se utiliza para determinar la longitud del arreglo y controlar
 * el n�mero de iteraciones del algoritmo de ordenaci�n.
 */
void bubble(int data[],int num);

//*********************************************************************************************************************************

/**
 * La funci�n BubbleBidirecccional implementa el algoritmo de ordenaci�n de burbuja bidireccional (tambi�n conocido como "shaker sort")
 * en C++ para ordenar un arreglo de enteros.
 *
 * @param data Un arreglo de enteros que se desea ordenar utilizando el algoritmo de burbuja bidireccional.
 * @param num El par�metro `num` en la funci�n `BubbleBidirecccional` representa el n�mero de
 * elementos en el arreglo `data` que se desean ordenar. Este par�metro especifica el tama�o del arreglo
 * y ayuda a controlar las iteraciones del bucle dentro de la funci�n para realizar el ordenamiento.
 */
void BubbleBidirecccional(int data[], int num);

//*********************************************************************************************************************************

/**
 * La funci�n `seleccion` en C++ implementa el algoritmo de ordenaci�n por selecci�n (selection sort)
 * para ordenar un arreglo de enteros en orden ascendente.
 *
 * @param data Un arreglo de enteros que contiene los datos a ordenar utilizando el algoritmo de ordenaci�n por selecci�n.
 * @param num El par�metro `num` en la funci�n `seleccion` representa el n�mero de elementos en el
 * arreglo `data` que deben ser ordenados usando el algoritmo de ordenaci�n por selecci�n.
 */
void seleccion(int data[], int num);

//*********************************************************************************************************************************

/**
 * La funci�n `insercion` implementa el algoritmo de ordenaci�n por inserci�n (insertion sort)
 * para ordenar un arreglo de enteros en C++.
 *
 * @param data Un arreglo de enteros que ser� ordenado utilizando el algoritmo de ordenaci�n por inserci�n.
 * @param num El par�metro `num` en la funci�n `insercion` representa el n�mero de elementos
 * en el arreglo `data` que se desean ordenar mediante el algoritmo de ordenaci�n por inserci�n.
 */
void insercion(int data[], int num);

//*********************************************************************************************************************************
/**
 * La funci�n ShellSort implementa el algoritmo de ordenaci�n Shell sort para ordenar un arreglo de enteros en C++.
 *
 * @param arreglo Arreglo de enteros que se desea ordenar mediante el algoritmo Shell Sort.
 * @param n  N�mero de elementos en el arreglo `arreglo[]` que deben ser ordenados con Shell Sort.
 */
void ShellSort(int data[], int num);
void ShellSort(int arreglo[], int n);

//*********************************************************************************************************************************

/**
 * La funci�n QuickSort ordena recursivamente un arreglo utilizando la t�cnica de partici�n.
 *
 * @param arreglo Arreglo de enteros que se desea ordenar mediante el algoritmo QuickSort.
 * @param primero �ndice del primer elemento del arreglo/subarreglo a ordenar.
 *               Indica el punto inicial para el proceso de ordenaci�n.
 * @param ultimo  �ndice del �ltimo elemento del arreglo/subarreglo a ordenar.
 *               Define el rango de elementos que deben ser ordenados.
 * @param n       Tama�o del arreglo `arreglo`. Determina el n�mero de elementos
 *               para que el algoritmo conozca los l�mites del arreglo durante la ordenaci�n.
 */
void QuickSort(int arreglo[], int primero, int ultimo, int n);

//*********************************************************************************************************************************

/**
 * La funci�n `Particion` en C++ divide un arreglo bas�ndose en un elemento pivote
 * e imprime un histograma de los elementos del arreglo.
 *
 * @param arreglo Arreglo de enteros que ser� particionado.
 * @param primero �ndice del primer elemento del arreglo `arreglo` que se particionar�.
 *               Indica el punto inicial del proceso de partici�n dentro del arreglo.
 * @param ultimo  �ndice del �ltimo elemento del arreglo `arreglo`. Se utiliza para
 *               determinar el elemento pivote para la partici�n del arreglo.
 * @param n       Tama�o del arreglo `arreglo`. Indica el n�mero de elementos y se usa
 *               para determinar la longitud del arreglo siendo particionado.
 *
 * @return La funci�n `Particion` retorna el �ndice del elemento pivote despu�s de
 *         realizar la partici�n del arreglo.
 */
int Particion(int arreglo[], int primero, int ultimo, int n);

//*********************************************************************************************************************************

void MergeSort(int arreglo[],int primero,int ultimo,int num);

void Mezclar(int arreglo[],int primero,int ValorMedio,int ultimo);

//*********************************************************************************************************************************



#endif // ORDENAMIENTOS_H_INCLUDED

