#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

#define CANT_MAX 50

///PROTOTIPADOS:
int cantidad_Arreglo( int [], int);
void mostrar_Arreglo(int [], int);
void sumar_Arreglo(int [], int);
void arreglo_a_pila(int [], int);
void cargar_arreglo_float(float [], int);
float sumas_arreglo_float(float [], int);
void mostra_arreglo_float(float [], int);
void buscar_elemento(char [], int, char);
void insertar_caracter_ordenado(char [], int, char);
char obtener_maximo_caracter(char [], int );
void arreglo_capicua(int [], int );
void invertir_arreglo(int [], int);
void seleccion(int [], int);
void insercion(int [], int);
void Ordenar_dos_arreglos(char [], char [],char [],int , int , int);

void MostarArregloChar (char[], int);


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
//    printf("EN EL EJERCICIO 4 INGRESE 5 VALORES... \n");
//    arreglo_a_pila(arreglo1, validos);

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
//    char arreglo1[CANT_MAX] = {'a', 'b', 'c', 'd', 'e', 'f'};
//    int validos = 6;
//    char dato = 'c';
//    buscar_elemento(arreglo1, validos, dato);

    /**EJERCICIO 7*/
//    char arreglo1[CANT_MAX] = {'a', 'b', 'd', 'e', 'f'};
//    int validos = 5;
//    char caracter = 'c';
//
//    insertar_caracter_ordenado(arreglo1, validos, caracter);
//    printf("%s\n", arreglo1);

    /**EJERCICIO 8*/
//    char arreglo1[CANT_MAX] = {'a', 'b', 'z', 'c', 'f'};
//    int validos = 5;
//    char variable = obtener_maximo_caracter(arreglo1, validos);
//    printf("%c\n", variable);

    /**EJERCICIO 9*/
//    int arreglo1[CANT_MAX] = {7, 9, 3, 9, 7};
//    int validos = 5;
//    arreglo_capicua(arreglo1, validos);

    /**EJERCICIO 10*/
//    int arreglo1[CANT_MAX] = {1, 2, 3, 4, 5};
//    int validos = 5;
//    invertir_arreglo(arreglo1, validos);

    /**EJERCICIO 11*/
    //Seleccion
//    int arreglo1[CANT_MAX] = {2, 1, 3, 5, 4};
//    int validos = 5;
//    seleccion(arreglo1, validos);
//    mostrar_Arreglo(arreglo1, validos);  //Funcion para mostrar.

    //Insercion
//    int arreglo1[CANT_MAX] = {2, 1, 3, 5, 4};
//    int validos = 5;
//    insercion(arreglo1, validos);
//    mostrar_Arreglo(arreglo1, validos);

    /**Ejercicio 12*/
    char arreglo1[CANT_MAX] = {'a','c','e','g'};
    int validos1 = 4;
    printf("ARREGLO 1:\n");
    MostarArregloChar(arreglo1, validos1);

    char arreglo2[CANT_MAX] = {'b','d','f'};
    int validos2 = 3;
    printf("ARREGLO 2:\n");
    MostarArregloChar(arreglo2, validos2);

    char arreglo3[CANT_MAX];
    int validos3 = 7;
    Ordenar_dos_arreglos(arreglo1, arreglo2, arreglo3, validos1, validos2, validos3);
    printf("ARREGLO 3:\n");
    MostarArregloChar(arreglo3, validos3);

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
void arreglo_a_pila(int arreglo[], int validos)
{
    Pila pila1;
    inicpila(&pila1);
    cantidad_Arreglo(arreglo, validos); /// Funcion de cargar.
    printf("ARREGLO CARGADO: \n");

    for(int i = 0; i < validos; i++)
    {
        apilar(&pila1, arreglo[i]);
    }
    mostrar(&pila1);

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
void buscar_elemento(char arreglo[], int validos, char dato)
{

    for(int i = 0; i < validos; i++)
    {
        if(dato == arreglo[i])
        {
            printf("Se a encontrado el dato...");
            return;
        }
    }
    printf("No se a encontrado el dato...");
}

/*Ejercicio 7.) Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente, conservando el orden.*/
void insertar_caracter_ordenado(char arreglo[], int validos, char caracter)
{
    int i, j;

    // Encontrar la posición donde se debe insertar el caracter
    for(i = 0; i < validos; i++)
    {
        if(caracter < arreglo[i])
        {
            break;
        }
    }

    // Desplazar los elementos a la derecha a partir de la posición donde se debe insertar el caracter
    for(j = validos; j >= i; j--)
    {
        arreglo[j+1] = arreglo[j];
    }

    // Insertar el caracter en la posición adecuada
    arreglo[i] = caracter;

    // Aumentar la longitud del arreglo
    validos++;
}

/*Ejercicio 8.) Realizar una función que obtenga el máximo carácter de un arreglo dado.*/
char obtener_maximo_caracter(char arreglo[], int validos)
{
    char maximo = arreglo[0];

    for(int i = 0; i < validos; i++)
    {
        if(arreglo[i] > maximo)
        {
            maximo = arreglo[i];
        }
    }
    return maximo;
}

/*Ejercicio 9.) Realizar una función que determine si un arreglo es capicúa.*/
void arreglo_capicua(int arreglo[], int validos)
{
    for(int i  = 0; i < validos / 2; i++)
    {
        if(arreglo[i] != arreglo[validos - 1 - i])
        {
            printf("El arreglo NO es capicua. \n");
            return;
        }
    }
    printf("El arreglo SI es capicua. \n");
}

/*Ejercicio 10.) Realizar una función que invierta los elementos de un arreglo. (sin utilizar un arreglo auxiliar).*/
void invertir_arreglo(int arreglo[], int validos)
{
    int i = 0;
    Pila pila1;
    inicpila(&pila1);

    printf("Arreglo original:\n");
    mostrar_Arreglo(arreglo, validos);

    for(i = 0; i < validos; i++)   ///Recorro el arreglo y le copio los valores a una pila.
    {
        apilar(&pila1, arreglo[i]);
    }

    for(i = 0; i < validos; i++)  ///Desapilo la pila en el arreglo, pisando los datos que ya tenia
    {
        arreglo[i] = desapilar(&pila1);
    }

    printf("Arreglo invertido:\n");
    mostrar_Arreglo(arreglo, validos);
}

/*Ejercicio 11.)Ordenar un arreglo según los siguientes métodos: Selección E Inserción*/
void seleccion(int arreglo[], int validos)
{
    // Recorremos el arreglo
    for(int i = 0; i < validos; i++)
    {
    // Buscamos el elemento de menor valor desde la posición i hasta el final del arreglo
        int menor = i;

        for(int j = i + 1; j < validos; j++)
        {
            if(arreglo[j] < arreglo[menor])
            {
                menor = j;
            }
        }
     // Intercambiamos el elemento de la posición i con el de menor valor encontrado
        int temporal = arreglo[menor];
        arreglo[menor] = arreglo[i];
        arreglo[i] = temporal;
    }
}

void insercion(int arreglo[], int validos)
{
    for(int i = 1; i < validos; i++)
    {
        int temporal = arreglo[i]; //Guardamos el valor actual.
        int j = i - 1;

        //Desplazamos los elementos mayores que el valor actual una posicion adelante.
        while(j >= 0 && arreglo[j] > temporal)
        {
            arreglo[j+1] = arreglo[j];
            j--;
        }
        arreglo[j+1] = temporal; //Insertamos el valor actual en su posicion correcta.
    }
}

/*Ejercicio 12.)Dados dos arreglos ordenados alfabéticamente, crear un tercer arreglo con los elementos de los dos primeros intercalados,
de manera que quede un arreglo también ordenado alfabéticamente.*/
void Ordenar_dos_arreglos(char Arreglo1[], char Arreglo2[],char Arreglo3[],int validos1, int validos2, int validos3)
{

    int i1=0;
    int i2=0;
    int i3=0;


    while ((i1<validos1) && (i2<validos2) && (i3<validos3))  //Mientras haya elementos en los 3 arreglos
     {

        if (Arreglo1[i1]<Arreglo2[i2]) //Si el elemento del arreglo 1 es menor al del arreglo 2
        {
          Arreglo3[i3]=Arreglo1[i1]; // Se agrega el elemento del arreglo 1 al arreglo 3
          i1++;
          i3++;
        }
        else  // Si el elemento del arreglo 2 es menor o igual que el del arreglo 1
        {
           Arreglo3[i3]=Arreglo2[i2]; // Se agrega el elemento del arreglo 2 al arreglo 3
           i2++;
           i3++;
        }

    }
}

void MostarArregloChar (char ArregloC [], int validosC)
{
    int i=0;


    for (i=0; i<validosC; i++)
    {

        printf("\nEl caracter %c, esta en la posicion %i del Arreglo\n",ArregloC[i],i);

    }
}
