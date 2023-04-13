#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <string.h>

///Prototipados:
void cargarPila(Pila);
void pasajePila (Pila*, Pila*);
void pasaje_Pila_Ordenado (Pila*, Pila*, Pila*);
int borrar_el_menor (Pila*);
void ordenar_pila(Pila*, Pila*);
void insertar_en_pila_ordenada(Pila*, int);
void pasar_a_pila_ordenada(Pila*, Pila*);
int SumarUltimosDosDeUnaPila(Pila*);
int suma_pila(Pila*);
int contar_pila(Pila*);
float dividir(int, int);
float promedio_pila(Pila*);
int pila_a_numero(Pila*);


int main()
{
    /**Ejercicio 1*/
//    Pila B;
//    inicpila(&B);
//    cargarPila(&B);

    /**Ejercicio 2*/
//    Pila pila1;
//    Pila pila2;
//    inicpila(&pila1);
//    inicpila(&pila2);
//
//    leer(&pila1);
//    leer(&pila1);
//    leer(&pila1);
//
//    pasajePila(&pila1, &pila2);
//
//    printf("\nElementos de la pila2: \n");
//    mostrar(&pila2);

    /**Ejercicio 3*/
//    Pila pila1;
//    Pila pilaAux;
//    Pila pila2;
//
//    inicpila(&pila1);
//    inicpila(&pilaAux);
//    inicpila(&pila2);
//
//    leer(&pila1);
//    leer(&pila1);
//    leer(&pila1);
//
//    pasaje_Pila_Ordenado(&pila1, &pilaAux, &pila2);
//
//    printf("\nElementos de la pila2: \n");
//    mostrar(&pila2);

    /**Ejercicio 4*/
//    Pila pila1;
//    inicpila(&pila1);
//
//    apilar(&pila1, 5);
//    apilar(&pila1, 8);
//    apilar(&pila1, 3);
//    apilar(&pila1, 6);
//    mostrar(&pila1);
//
//    borrar_el_menor(&pila1);
//
//    printf("PILA 1: \n");
//    mostrar(&pila1);

    /**Ejercicio 5*/
//    Pila p1, p2;
//    inicpila(&p1);
//    inicpila(&p2);
//
//    apilar(&p1, 3);
//    apilar(&p1, 1);
//    apilar(&p1, 4);
//    apilar(&p1, 2);
//
//    ordenar_pila(&p1, &p2);
//
//    printf("Pila ordenada: \n");
//    mostrar(&p2);

    /**Ejercicio 6*/
//    Pila p1;
//    inicpila(&p1);
//
//    apilar(&p1, 5);
//    apilar(&p1, 4);
//    apilar(&p1, 3);
//    apilar(&p1, 1);
//
//    insertar_en_pila_ordenada(&p1, 2);
//
//    printf("Pila ordenada: \n");
//    mostrar(&p1);

    /**Ejercicio 7*/
//    Pila p1, p2;
//    inicpila(&p1);
//    inicpila(&p2);
//
//    apilar(&p1, 5);
//    apilar(&p1, 4);
//    apilar(&p1, 3);
//    apilar(&p1, 1);
//
//    pasar_a_pila_ordenada(&p1, &p2);
//
//    printf("Pila ordena por insercion: \n ");
//    mostrar(&p2);

    /**Ejercicio 8*/
//    Pila p1;
//    inicpila(&p1);
//
//    apilar(&p1, 5);
//    apilar(&p1, 4);
//    apilar(&p1, 3);
//    apilar(&p1, 2);
//    apilar(&p1, 1);
//
//    int variable = SumarUltimosDosDeUnaPila(&p1);
//
//    printf("Pila p1 sumando los dos primeros elementos: \n");
//    printf("%i", variable);

    /**Ejercicio 9*/
//    Pila p1;
//    inicpila(&p1);
//
//    apilar(&p1, 1);
//    apilar(&p1, 2);
//    apilar(&p1, 3);
//    apilar(&p1, 4);
//    apilar(&p1, 5);
//
//    float variable = promedio_pila(&p1);
//    printf("El promedio de los elementos de la pila es: %f\n", variable);

    /**Ejercicio 10*/
//    Pila p;
//    inicpila(&p);
//
//    apilar(&p, 4);
//    apilar(&p, 9);
//    apilar(&p, 2);
//    apilar(&p, 7);
//    apilar(&p, 3);
//
//    int numero = pila_a_numero(&p);
//    printf("El numero es: %d\n", numero);

    return 0;
}

/**Ejercicio 1.) Hacer una función que permita ingresar varios elementos a una pila, tanto como quiera el usuario. */
void cargarPila(Pila B)
{

    char continuar;

    do
    {
        printf("Carga de pila:\n");
        leer(&B);
        printf("Desea ingresar otro valor? s/n\n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while(continuar =='s' || continuar =='S');

    mostrar(&B);
}

/**Ejercicio 2.) Hacer una función que pase todos los elementos de una pila a otra. */
void pasajePila (Pila* origen, Pila* destino)
{
    while(!pilavacia(origen))
    {
        apilar(destino, desapilar(origen));
    }
}

/**Ejercicio 3.) Hacer una función que pase todos los elementos de una pila a otra, pero conservando el orden. */
void pasaje_Pila_Ordenado (Pila* origen, Pila* aux, Pila* destino)
{
    while(!pilavacia(origen))
    {
        apilar(aux, desapilar(origen));
    }

    while(!pilavacia(aux))
    {
        apilar(destino, desapilar(aux));
    }
}

/**Ejercicio 4.) Hacer una función que encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila.*/
int borrar_el_menor (Pila* origen)
{

    Pila aux;
    inicpila(&aux);
    int menor;

    // desapilamos el primer dato de la pila en menor
    if(!pilavacia(origen))
    {
        menor = desapilar(origen);
    }
    // recorremos la pila original
    while(!pilavacia(origen))
    {
        apilar(&aux, desapilar(origen));
        // condicion encontrar menor
        if(tope(&aux) < menor)
        {
            // en caso de encontrar menor, apila el menor que teniamos guardado antes en la pila de origen
            apilar(origen, menor);
            // guardamos el nuevo menor
            menor = desapilar(&aux);
        }
    }

    // se devuelven los datos de la pila aux a la pila original
    while(!pilavacia(&aux))
    {
        apilar(origen, desapilar(&aux));
    }
    //printf("EL menor es: %i\n", menor);

    return menor;
}

/**Ejercicio 5.) Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.
Usar la función del ejercicio 4. (Ordenamiento por selección)*/
void ordenar_pila(Pila* origen, Pila* destino)
{
    Pila aux;
    inicpila(&aux);

    while(!pilavacia(origen))
    {
        int min = borrar_el_menor(origen);
        apilar(&aux, min);
    }

    while (!pilavacia(&aux))
    {
        apilar(destino, desapilar(&aux));
    }
}

/**Ejercicio 6.) Hacer una función que inserta en una pila ordenada un nuevo elemento, conservando el orden de ésta.*/
void insertar_en_pila_ordenada(Pila* pila, int elemento)
{
    Pila aux;
    inicpila(&aux);

    // Mientras la pila no esté vacía y el tope sea menor que el elemento a insertar,
    // se desapila de la pila original y se apila en la pila auxiliar
    while(!pilavacia(pila) && elemento > tope(pila))
    {
        apilar(&aux, desapilar(pila));
    }
    // Se apila el elemento a insertar en la pila original
    apilar(pila, elemento);

    // Se devuelven los elementos de la pila auxiliar a la pila original, manteniendo el orden
    while(!pilavacia(&aux))
    {
        apilar(pila, desapilar(&aux));
    }
}

/**Ejercicio 7.) Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.
Usar la función del ejercicio 6.  (Ordenamiento por inserción)*/
void pasar_a_pila_ordenada(Pila* origen, Pila* destino)
{
    while(!pilavacia(origen))
    {
        int elemento = desapilar(origen);
        insertar_en_pila_ordenada(destino, elemento);
    }
}

/**Ejercicio 8.) Hacer una función que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido.*/
int SumarUltimosDosDeUnaPila(Pila* F)
{
    int aux1 = 0;
    int aux2 = 0;
    int suma = 0;
    int num1 = 0;
    int num2 = 0;

    aux1=tope(F); //Hago una copia del tope de la pila en aux1.
    desapilar(F); //Desapilo ese tope para pasar el sig. numero, el nuevo tope.
    aux2=tope(F); //Hago una copia del nuevo tope en aux2.
    num1=aux1;    //Igualo el valor de aux1 en num1 para posteriormente sumarlo.
    num2=aux2;    //Igualo el segundo valor en num2
    suma=(aux1+aux2); //Sumo los valores almacenados en aux1 y aux2;

    return suma;  //Retorno el valor de la suma.
}

/**Ejercicio 9) Hacer una función que calcule el promedio de los elementos de una pila, para ello hacer también una función que calcule la suma,
   otra para la cuenta y otra que divida. En total son cuatro funciones, y la función que calcula el promedio invoca a las otras 3. */
///PASOS:
///1.Hacer una funcion que sume la pila.
///2.Hacer una funcion que cuente lo elemento de la píla.
///3.Hacer una funcion que divida.
///4.Hacer una funcion que calcule el promedio de la pila invocando la otras 3 funciones.

int suma_pila(Pila* A)
{
    int suma = 0;
    Pila aux;
    inicpila(&aux);

    // Se desapilan los elementos de la pila original y se suman en una pila auxiliar
    while(!pilavacia(A))
    {
        int elemento = desapilar(A);
        suma += elemento;
        apilar(&aux, elemento);
    }

    // Se vuelven a apilar los elementos en la pila original
    while(!pilavacia(&aux))
    {
        apilar(A, desapilar(&aux));
    }

    return suma;
}

int contar_pila(Pila* A)
{
    int cuenta = 0;
    Pila aux;
    inicpila(&aux);

    // Se desapilan los elementos de la pila original y se cuentan en una pila auxiliar
    while(!pilavacia(A))
    {
        int elemento = desapilar(A);
        cuenta++;
        apilar(&aux, elemento);
    }

    // Se vuelven a apilar los elementos en la pila original
    while(!pilavacia(&aux))
    {
        apilar(A, desapilar(&aux));
    }

    return cuenta;
}

float dividir(int B, int C)
{
    return (float)B / (float)C;
}

float promedio_pila(Pila* A)
{
    int suma = suma_pila(A);
    int cuenta = contar_pila(A);
    return dividir(suma, cuenta);
}

/**Ejercicio 10) Hacer una función que reciba una pila con números de un solo dígito (es responsabilidad de quien usa el programa)
   y que transforme esos dígitos en un número decimal. */
int pila_a_numero(Pila* pila)
{
    int numero = 0;
    int multiplicador = 1;  // Inicializamos el multiplicador en 1

    // Recorremos la pila y construimos el número decimal
    while(!pilavacia(pila))
    {
        int digito = desapilar(pila);
        numero += digito * multiplicador;
        multiplicador *= 10;
    }

    return numero;
}



