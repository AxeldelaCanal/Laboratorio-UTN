#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <time.h> ///Se utliza para el ejercicio 8
#define CANT_CARTAS 39

/**Ejercicio 1) Cargar desde el teclado una pila DADA con 5 elementos.
   Pasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 ( 5 4 3)
   y los restantes a la pila AUX2  (2 1), ambas pilas inicializadas*/

/*int main()
{
    Pila pilaDada, pilaAux1, pilaAux2;

    inicpila(&pilaDada);
    inicpila(&pilaAux1);
    inicpila(&pilaAux2);

    apilar(&pilaDada, 1);
    apilar(&pilaDada, 2);
    apilar(&pilaDada, 3);
    apilar(&pilaDada, 4);
    apilar(&pilaDada, 5);


    printf ("Pila DADA"),mostrar (&pilaDada);  ///Muestro la pila DADA con sus valores.

    apilar(&pilaAux1, desapilar(&pilaDada));
    apilar(&pilaAux1, desapilar(&pilaDada));
    apilar(&pilaAux1, desapilar(&pilaDada));

    printf("Pila aux1"), mostrar (&pilaAux1);

    apilar(&pilaAux2, desapilar(&pilaDada));
    apilar(&pilaAux2, desapilar(&pilaDada));

    printf("Pila aux2"), mostrar (&pilaAux2);

    return 0;
}*/

/**Ejercicio 2) Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar todos los
   elementos de la pila ORIGEN a la pila DESTINO.*/

/*int main()
{
    Pila pilaOrigen, pilaDestino, pilaAux;
    char continuar;

    inicpila (&pilaOrigen);
    inicpila (&pilaDestino);
    inicpila (&pilaAux);

    do
    {
        leer(&pilaOrigen);
        printf("\nDesea ingresar mas numeros? s/n\n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while (continuar == 's' || continuar == 'S');

    while(!pilavacia(&pilaOrigen))
    {
        apilar(&pilaAux, desapilar(&pilaOrigen));
    }

    while(!pilavacia(&pilaAux))
    {
        apilar(&pilaDestino, desapilar(&pilaAux));
    }

    mostrar(&pilaDestino);

    return 0;
}*/

/**Ejercicio 3)Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al
   valor 8.*/

/*int main()
{
    Pila pilaDada, pilaDestinos;
    char continuar;
    int valor;

    inicpila (&pilaDada);
    inicpila (&pilaDestinos);

    do
    {
        leer(&pilaDada);
        printf("\nDesea ingresar mas valores?  s/n \n");
        fflush(stdin);
        scanf("%c", &continuar);

    }
    while (continuar == 's' || continuar == 'S');

    while (!pilavacia(&pilaDada))
    {
        if (tope(&pilaDada) != 8)
        {
            apilar(&pilaDestinos, desapilar(&pilaDada));
        }
        else
        {
            valor = desapilar(&pilaDada);
        }
    }

     mostrar(&pilaDestinos);
}*/

/**Ejercicio 4) Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar los elementos de
   la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.*/

/*int main()
{
    Pila pilaOrigen, pilaDestino, pilaAux;
    char continuar;

    inicpila(&pilaOrigen);
    inicpila(&pilaDestino);
    inicpila(&pilaAux);

    do
    {
        leer(&pilaOrigen);
        printf("Desea cargar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while(continuar == 's' || continuar == 'S');

    while(!pilavacia(&pilaOrigen))
    {
        apilar(&pilaAux, desapilar(&pilaOrigen));
    }

    while(!pilavacia(&pilaAux))
    {
        apilar(&pilaDestino, desapilar(&pilaAux));
    }

    printf("\nPila Destino:");
    mostrar(&pilaDestino);

    return 0;
}*/

/**Ejercicio 5) Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos
   cargados originalmente en ella, pero en orden inverso.*/

/*int main()
{
    Pila pilaDada, pilaAux1, pilaAux2;
    char continuar;

    inicpila(&pilaDada);
    inicpila(&pilaAux1);
    inicpila(&pilaAux2);

    do
    {
        leer(&pilaDada);
        printf("Desea ingresar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while (continuar == 's' || continuar == 'S');

    while (!pilavacia(&pilaDada))
    {
        apilar(&pilaAux1, desapilar(&pilaDada));
    }

    while (!pilavacia(&pilaAux1))
    {
        apilar(&pilaAux2, desapilar(&pilaAux1));
    }

    while (!pilavacia(&pilaAux2))
    {
        apilar(&pilaDada, desapilar(&pilaAux2));
    }

    mostrar(&pilaDada);

    return 0;
}*/


/**Ejercicio 6) Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes elementos en el mismo orden.*/

/*int main()
{
    Pila pilaDada, pilaAux1, pilaAux2;
    char continuar;

    inicpila(&pilaDada);
    inicpila(&pilaAux1);
    inicpila(&pilaAux2);

    do
    {
        leer(&pilaDada);
        printf("Desea cargar otro valor? s/n \n"),
               fflush(stdin);
        scanf("%c", &continuar);
    }
    while(continuar == 's'  || continuar == 'S');

    mostrar(&pilaDada);

    if (!pilavacia(&pilaDada))
    {
        apilar(&pilaAux1, desapilar(&pilaDada));
    }

    while (!pilavacia(&pilaDada))
    {
        apilar(&pilaAux2, desapilar(&pilaDada));
    }

    if(!pilavacia(&pilaAux1))
    {
        apilar(&pilaDada, desapilar(&pilaAux1));
    }

    while(!pilavacia(&pilaAux2))
    {
        apilar(&pilaDada, desapilar(&pilaAux2));
    }

    mostrar(&pilaDada);


    return 0;
}*/

/**Ejercicio 7) Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes
   elementos en el mismo orden.*/

/*int main()
{
    Pila pilaDada, pilaAux1, pilaAux2, pilaAux3;
    char continuar;

    inicpila(&pilaDada);
    inicpila(&pilaAux1);
    inicpila(&pilaAux2);
    inicpila(&pilaAux3);

    do
    {
        leer(&pilaDada);
        printf("Desea ingresar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while(continuar == 's' || continuar == 'S');

    while(!pilavacia(&pilaDada))
    {
        apilar(&pilaAux1, desapilar(&pilaDada));
    }

    if (!pilavacia(&pilaAux1))
    {
        apilar(&pilaAux2, desapilar(&pilaAux1));
    }

    while(!pilavacia(&pilaAux1))
    {
        apilar(&pilaDada, desapilar(&pilaAux1));
    }

    if(!pilavacia(&pilaAux2))
    {
        apilar(&pilaDada, desapilar(&pilaAux2));
    }

    mostrar(&pilaDada);


    return 0;
}*/

/**Ejercicio 8) Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.*/

/*int main()
{
    Pila Mazo, Jugador1, Jugador2;

    inicpila(&Mazo);
    inicpila(&Jugador1);
    inicpila(&Jugador2);

    srand(time(NULL)); //le doy un valor inicial, una semilla que alimenta los valores aleatorios basado en el reloj de mi pc

    for (int i = 1; i<= CANT_CARTAS; i++)
    {
        apilar(&Mazo,(rand() % 12) + 1);
    }
    mostrar(&Mazo);

    while (!pilavacia(&Mazo))
    {
        apilar(&Jugador1, desapilar(&Mazo));

        if(!pilavacia(&Mazo))
        {
            apilar(&Jugador2, desapilar(&Mazo));
        }
    }
    printf("Jugador 1\n");
    mostrar (&Jugador1);
    printf ("jugador 2\n");
    mostrar (&Jugador2);

    return 0;
}*/

/**Ejercicio 9) Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.*/

/*int main()
{
    Pila pilaA, pilaB, pilaAuxA, pilaAuxB;
    char continuar;

    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&pilaAuxA);
    inicpila(&pilaAuxB);

    do
    {
        leer(&pilaA);
        printf("Desea ingresar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }

    while (continuar == 's'  ||  continuar == 'S');

    do
    {
        leer(&pilaB);
        printf("Desea ingresar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }

    while (continuar == 's'  ||  continuar == 'S');


    while (!pilavacia(&pilaA) && !pilavacia(&pilaB))
    {
        apilar(&pilaAuxA, desapilar(&pilaA));
        apilar(&pilaAuxB, desapilar(&pilaB));
    }

    if(!pilavacia(&pilaA))
    {
        printf("La pila A es mas grande\n");
    }
    else if(!pilavacia(&pilaAuxB))
    {
        printf("La pila B es mas grande\n");
    }else
    {
        printf("Las pilas son del mismo tamaño");
    }
    return;
}*/

/**Ejercicio 10) Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales (en cantidad de
   elementos, valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.*/
/*
int main()
{
    Pila A, B;
    int basura;
    char continuar;
    inicpila(&A);
    inicpila(&B);

    printf("PILA A: \n");
    do
    {
        leer(&A);
        printf("Desea continuar? s/n \n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while (continuar == 's' || continuar == 'S');


    printf("PILA B: \n");
    do
    {
        leer(&B);
        printf("Desea continuar?\n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while (continuar == 's' || continuar == 'S');


    while ((!pilavacia(&A) && !pilavacia(&B)) && (tope(&A) == tope(&B)))
    {
        basura = desapilar(&A);
        basura = desapilar(&B);

    }

    if (pilavacia(&A) && pilavacia(&B))
    {
        printf("Las pilas son identicas\n");
    }
    else if (!pilavacia(&A) && !pilavacia(&B))
    {
        printf("Tienen elementos distintos\n");
    }
    else if (!pilavacia(&A))
    {
        printf("A tiene mas elementos que B\n");
    }
    else
    {
        printf("B tiene mas elementos que A\n");
    }

    printf("A:\n");
    mostrar(&A);
    printf("B:\n");
    mostrar(&B);

    return 0;
}*/

/**Ejercicio 11) Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los
   elementos que sean iguales al tope de la pila MODELO.*/

/*int main()
{
    Pila pilaModelo, pilaDada, pilaAux2;
    char continuar;
    int Aux1;

    inicpila(&pilaModelo);
    inicpila(&pilaDada);
    inicpila(&pilaAux2);


    printf("PILA MODELO\n");
    do
    {
        leer(&pilaModelo);
        printf("Desea cargar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while(continuar == 's' || continuar == 'S');


    printf("PILA DADA\n");
    do
    {
        leer(&pilaDada);
        printf("Desea cargar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while(continuar == 's' || continuar == 'S');


    mostrar(&pilaDada);

    while(!pilavacia(&pilaDada))
    {
        if(tope(&pilaDada) == tope(&pilaModelo))
        {
            Aux1 = desapilar(&pilaDada);
        }
        else
        {
            apilar(&pilaAux2, desapilar(&pilaDada));
        }
    }

    while(!pilavacia(&pilaAux2))
    {
        apilar(&pilaDada, desapilar(&pilaAux2));
    }

    mostrar(&pilaDada);

    return 0;
}
*/

/**Ejercicio 12) Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los
   elementos que existan en MODELO.*/

int main()
{
    Pila MODELO;
    Pila DADA;
    Pila auxMODELO;
    Pila auxDADA;

    int basura;

    inicpila(&DADA);
    inicpila(&MODELO);
    inicpila(&auxDADA);
    inicpila(&auxMODELO);

    apilar(&MODELO,3);
    apilar(&MODELO,5);
    apilar(&MODELO,7);

    apilar(&DADA,1);
    apilar(&DADA,4);
    apilar(&DADA,3);
    apilar(&DADA,5);



    while (!pilavacia(&MODELO))
    {
        // apilar(&auxMODELO, desapilar(&MODELO));
        while (!pilavacia(&DADA))
        {
            if (tope(&DADA) == tope(&MODELO)) ///si el tope es igual debo eliminarlo
            {
                basura = desapilar(&DADA); ///lo desapilo en euna variable entera
            }
            else
            {
                apilar(&auxDADA,desapilar(&DADA)); ///conservo el valor apilandolo en aux
            }

        }
        apilar(&auxMODELO,desapilar(&MODELO));

        while (!pilavacia(&auxDADA)) ///devuelvo los elementos de aux hacia dada para avanzar con la siguiente comparacion
        {
            apilar(&DADA,desapilar(&auxDADA));
        }
    }



    while (!pilavacia(&auxMODELO)) ///devuelve los elementos a modelo
    {
        apilar(&MODELO,desapilar(&auxMODELO));
    }

    printf("DADA:");
    mostrar(&DADA);
    printf("MODELO: ");
    mostrar(&MODELO);



    return 0;
}
