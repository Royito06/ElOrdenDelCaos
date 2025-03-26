#ifndef ORDENAMIENTOS_H_INCLUDED
#define ORDENAMIENTOS_H_INCLUDED

//*********************************************************************************************************************************
/**
 * La función "bubble" implementa el algoritmo de ordenación de burbuja (bubble sort) para ordenar un arreglo de enteros.
 * Además, llama a una función "ImprimirHistograma" para imprimir un histograma del arreglo en cada iteración.
 *
 * @param data El parámetro `data` es un arreglo de enteros que contiene los elementos a ordenar
 * utilizando el algoritmo de burbuja.
 * @param num El parámetro `num` en la función `bubble` representa el número de elementos en el
 * arreglo `data` que deben ser ordenados. Se utiliza para determinar la longitud del arreglo y controlar
 * el número de iteraciones del algoritmo de ordenación.
 */
void bubble(int data[],int num);

//*********************************************************************************************************************************

/**
 * La función BubbleBidirecccional implementa el algoritmo de ordenación de burbuja bidireccional (también conocido como "shaker sort")
 * en C++ para ordenar un arreglo de enteros.
 *
 * @param data Un arreglo de enteros que se desea ordenar utilizando el algoritmo de burbuja bidireccional.
 * @param num El parámetro `num` en la función `BubbleBidirecccional` representa el número de
 * elementos en el arreglo `data` que se desean ordenar. Este parámetro especifica el tamaño del arreglo
 * y ayuda a controlar las iteraciones del bucle dentro de la función para realizar el ordenamiento.
 */
void BubbleBidirecccional(int data[], int num);

//*********************************************************************************************************************************

/**
 * La función `seleccion` en C++ implementa el algoritmo de ordenación por selección (selection sort)
 * para ordenar un arreglo de enteros en orden ascendente.
 *
 * @param data Un arreglo de enteros que contiene los datos a ordenar utilizando el algoritmo de ordenación por selección.
 * @param num El parámetro `num` en la función `seleccion` representa el número de elementos en el
 * arreglo `data` que deben ser ordenados usando el algoritmo de ordenación por selección.
 */
void seleccion(int data[], int num);

//*********************************************************************************************************************************

/**
 * La función `insercion` implementa el algoritmo de ordenación por inserción (insertion sort)
 * para ordenar un arreglo de enteros en C++.
 *
 * @param data Un arreglo de enteros que será ordenado utilizando el algoritmo de ordenación por inserción.
 * @param num El parámetro `num` en la función `insercion` representa el número de elementos
 * en el arreglo `data` que se desean ordenar mediante el algoritmo de ordenación por inserción.
 */
void insercion(int data[], int num);

//*********************************************************************************************************************************
/**
 * La función ShellSort implementa el algoritmo de ordenación Shell sort para ordenar un arreglo de enteros en C++.
 *
 * @param arreglo Arreglo de enteros que se desea ordenar mediante el algoritmo Shell Sort.
 * @param n  Número de elementos en el arreglo `arreglo[]` que deben ser ordenados con Shell Sort.
 */
void ShellSort(int data[], int num);
void ShellSort(int arreglo[], int n);

//*********************************************************************************************************************************

/**
 * La función QuickSort ordena recursivamente un arreglo utilizando la técnica de partición.
 *
 * @param arreglo Arreglo de enteros que se desea ordenar mediante el algoritmo QuickSort.
 * @param primero Índice del primer elemento del arreglo/subarreglo a ordenar.
 *               Indica el punto inicial para el proceso de ordenación.
 * @param ultimo  Índice del último elemento del arreglo/subarreglo a ordenar.
 *               Define el rango de elementos que deben ser ordenados.
 * @param n       Tamaño del arreglo `arreglo`. Determina el número de elementos
 *               para que el algoritmo conozca los límites del arreglo durante la ordenación.
 */
void QuickSort(int arreglo[], int primero, int ultimo, int n);

//*********************************************************************************************************************************

/**
 * La función `Particion` en C++ divide un arreglo basándose en un elemento pivote
 * e imprime un histograma de los elementos del arreglo.
 *
 * @param arreglo Arreglo de enteros que será particionado.
 * @param primero Índice del primer elemento del arreglo `arreglo` que se particionará.
 *               Indica el punto inicial del proceso de partición dentro del arreglo.
 * @param ultimo  Índice del último elemento del arreglo `arreglo`. Se utiliza para
 *               determinar el elemento pivote para la partición del arreglo.
 * @param n       Tamaño del arreglo `arreglo`. Indica el número de elementos y se usa
 *               para determinar la longitud del arreglo siendo particionado.
 *
 * @return La función `Particion` retorna el índice del elemento pivote después de
 *         realizar la partición del arreglo.
 */
int Particion(int arreglo[], int primero, int ultimo, int n);

//*********************************************************************************************************************************

void MergeSort(int arreglo[],int primero,int ultimo,int num);

void Mezclar(int arreglo[],int primero,int ValorMedio,int ultimo);

//*********************************************************************************************************************************



#endif // ORDENAMIENTOS_H_INCLUDED

