#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

#define CANT_MAX 50

///PROTOTIPADOS:
int cantidad_Arreglo( int [], int);
void mostrar_Arreglo(int [], int);
void sumar_Arreglo(int [], int);
void arreglo_a_pila(int [], int, Pila*);
void cargar_arreglo_float(float [], int);
float sumas_arreglo_float(float [], int);
void mostra_arreglo_float(float [], int);
void buscar_elemento(int [], int, int);


int main()
{
    /**EJERCICIO 1*/
//    int validos = 5;
//    int arreglo1 [CANT_MAX];
//    printf("EN EL EJERCICIO 1 INGRESE 5 VALORES...\n");
//    int variable = cantidad_Arreglo(arreglo1, validos);
//    printf("Posiciones con valores del arreglo son: %i\n", validos);

    /**EJERCICIO 2*/
//    int validos = 3;
//    int arreglo1 [CANT_MAX];
//    printf("EN EL EJERCICIO 2 INGRESE 3 VALORES...\n");
//    int variable = cantidad_Arreglo(arreglo1, validos);
//    mostrar_Arreglo(arreglo1, validos);

    /**EJERCICIO 3*/
//    int validos = 5;
//    int arreglo1[CANT_MAX];
//    printf("EN EL EJERCICIO 3 INGRESE 5 VALORES...\n");
//    sumar_Arreglo(arreglo1, validos);

    /**EJERCICIO 4*/
//    int validos = 5;
//    int arreglo1[CANT_MAX];
//    Pila p1;
//    inicpila(&p1);
//    printf("EN EL EJERCICIO 4 INGRESE 5 VALORES... \n");
//    arreglo_a_pila(arreglo1, validos, &p1);
//    mostrar(&p1);

    /**EJERCICIO 5*/
//    int validos;
//    float arreglo1[100];
//
//    printf("Ingrese la cantidad de elementos del arreglo (maximo 100): ");
//    scanf("%i", &validos);
//
//    cargar_arreglo_float(arreglo1, validos);
//    mostra_arreglo_float(arreglo1, validos);
//
//    float variable = sumas_arreglo_float(arreglo1, validos);
//    printf("\nLa suma de los elementos del arreglo es: %.2f \n", variable);

    /**EJERCICIO 6*/
//    int validos = 5;
//    int arreglo1[CANT_MAX];
//    arreglo1[0] = 2;
//    arreglo1[1] = 3;
//    arreglo1[2] = 5;
//    arreglo1[3] = 6;
//    arreglo1[4] = 7;
//    int dato = 1;
//    buscar_elemento(arreglo1, validos, dato);

    /**EJERCICIO 7*/




    return 0;
}

/*Ejercicio 1.) Hacer una función que reciba como parámetro un arreglo de números enteros y permita que el usuario ingrese valores al mismo por teclado.
  La función debe retornar la cantidad de elementos cargados en el arreglo (o pueden utilizar como puntero válidos).*/
int cantidad_Arreglo( int arreglo[], int validos)
{
    int i = 0;
    char continuar;

    do
    {
        printf("Ingrese un valor a cargar en el arreglo: \n");
        scanf("%i", &arreglo[i]);
        i++;
        printf("Quiere agregar otro valor? s/n\n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while(continuar == 'S' || continuar == 's');


    return i;
}

/*Ejercicio 2.) Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos) cargados en él y los muestre por pantalla.*/
void mostrar_Arreglo(int arreglo[], int validos)
{
    for (int i = 0; i < validos; i++)
    {
        printf("Arreglo[%i]: %i\n", i, arreglo[i]);
    }
}

/*Ejercicio 3.) Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos) cargados en él y calcule la suma de sus elementos.*/
void sumar_Arreglo(int arreglo[], int validos)
{
    cantidad_Arreglo(arreglo, validos);
    printf("ARREGLO CARGADO: \n");
    mostrar_Arreglo(arreglo, validos);

    int suma = 0;

    for(int i = 0; i < validos; i++)
    {
        suma += arreglo[i];
    }

    printf("SUMA de los elementos: %i\n", suma);
}

/*Ejercicio 4.) Hacer una función que reciba como parámetro un arreglo, la cantidad de elementos (válidos) cargados en él y una Pila.
  La función debe copiar los elementos del arreglo en la pila. */
void arreglo_a_pila(int arreglo[], int validos, Pila* pila1)
{
    cantidad_Arreglo(arreglo, validos); /// Funcion de cargar.
    printf("ARREGLO CARGADO: \n");

    for(int i = 0; i < validos; i++)
    {
        apilar(pila1, arreglo[i]);
    }

    mostrar_Arreglo(arreglo, validos); /// Funcion de mostrar.
}

/*Ejercicio 5.) Realizar una función que sume los elementos de un arreglo de números reales (float) de dimensión 100.
 (se recomienda hacer una función para cargar y otra para mostrar para este tipo de dato asociado al arreglo)*/
void cargar_arreglo_float(float arreglo[], int validos)
{
    for(int i = 0; i < validos; i++)
    {
        printf("Ingrese el valor del elemento %d: ", i+1);
        scanf("%f",&arreglo[i]);
    }
}

float sumas_arreglo_float(float arreglo[], int validos)
{
    float suma = 0.0;

    for(int i = 0; i < validos; i++)
    {
        suma += arreglo[i];
    }
    return suma;
}

void mostra_arreglo_float(float arreglo[], int validos)
{
    printf("El arreglo es: ");

    for(int i = 0; i < validos; i++)
    {
        printf("%.2f ", arreglo[i]);
    }
}

/*Ejercicio 6.) Realizar una función que indique si un elemento dado se encuentra en un arreglo de caracteres.*/
void buscar_elemento(int arreglo[], int validos, int dato)
{

    for(int i = 0; i < validos; i++)
    {
        if(dato == arreglo[i])
        {
            printf("Se a encontrado el dato...");
            break;
        }
    }

    printf("No se a encontrado el dato...");
}

/*Ejercicio 7.) Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente, conservando el orden. */

