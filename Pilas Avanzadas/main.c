#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°1----------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 1) Sumar los elementos de una pila (usar variables enteras)*/

/*int main()
{
    Pila pilaDada, pilaAux;
    inicpila(&pilaAux);
    inicpila(&pilaDada);

    int suma = 0;
    char continuar;

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
        apilar(&pilaAux, desapilar(&pilaDada));
        suma += tope(&pilaAux);
    }
    printf("El resultado es: %i", suma);

    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°2----------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 2) Contar los elementos de una pila (usar variables enteras)*/

/*int main()
{
    Pila DADA;
    inicpila (&DADA);
    Pila AUX;
    inicpila (&AUX);
    //int suma = 0;
    int i=0;  ///contador
    char continuar;

    do
    {
        leer (&DADA);
        printf ("desea continuar? s/n \n ");
        fflush (stdin);
        scanf ("%c",&continuar);
    }

    while (continuar == 's'   ||   continuar =='S');

    while (!pilavacia(&DADA))
    {
       //suma = suma + tope(&DADA);   ///suma += tope (&DADA);
        apilar (&AUX,desapilar(&DADA));
        i++;
    }

    //printf ("la suma es %i \n",suma );
    printf ("la cantidad de elementos es %i",i  );




    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°3----------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 3) Calcular el promedio de los valores de una pila(usar variables)*/

/*int main()
{
    Pila DADA;
    inicpila (&DADA);

    Pila AUX;
    inicpila (&AUX);

    int suma = 0;
    int i=0;  ///contador

    char continuar;

    float promedio;

    do
    {
        leer (&DADA);
        printf ("desea continuar? s/n \n ");
        fflush (stdin);
        scanf ("%c",&continuar);
    }

    while (continuar == 's'   ||   continuar =='S');

    while (!pilavacia(&DADA))
    {
        suma = suma + tope(&DADA);   ///suma += tope (&DADA);
        apilar (&AUX,desapilar(&DADA));
        i++;
    }

    promedio = (float)suma/i;

    printf ("la suma es %i \n",suma );
    printf ("la cantidad de elementos es %i \n",i  );
    printf ("el promedio es %.2f \n", promedio);

    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°4----------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 4) Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables enteras, solo pilas)*/

/*int main()
{
    Pila dada, menor, aux;
    inicpila(&dada);
    inicpila(&menor);
    inicpila(&aux);
    char continuar;

    do
    {
        leer(&dada);
        printf("Quiere ingresar otro dato? s/n \n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while (continuar == 's' || continuar =='S');


    while (!pilavacia (&dada))
    {
        apilar(&menor,desapilar(&dada));
        while (!pilavacia(&dada))
        {
            if (tope(&dada)>tope(&menor))
            {
                apilar(&aux,desapilar(&dada));
            }
            else
            {
                apilar(&aux,desapilar(&menor));
                apilar(&menor,desapilar(&dada));
            }
        }
    }
    puts("Pila dada");
    mostrar (&dada);

    puts("Pila menor");
    mostrar(&menor);

    puts("Pila aux");
    mostrar(&aux);

    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°5----------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 5)Insertar un elemento en una pila ordenada de menor (tope) a mayor (base) de forma tal
   que se conserve el orden. (sin variables, solo pilas) */

/*int main()
{
    Pila pilaDada, pilaAux, pilaDato;
    inicpila(&pilaDada);
    inicpila(&pilaAux);
    inicpila(&pilaDato);

    char continuar;

    printf("PILA DADA\n");
    do
    {
        leer(&pilaDada);
        printf("Quiere ingresar otro dato? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while (continuar == 's' || continuar == 'S');

    printf("Ingrese un valor a insertar \n");
    leer(&pilaDato);

    while(!pilavacia(&pilaDada) && !pilavacia(&pilaDato))
    {
        while(tope(&pilaDada) < tope(&pilaAux))
        {
            apilar(&pilaAux, desapilar(&pilaDada));
        }
        apilar(&pilaDada, desapilar(&pilaDato));
        while(!pilavacia(&pilaAux))
        {
            apilar(&pilaDada, desapilar(&pilaAux));
        }

    }

    puts("DADA");
    mostrar(&pilaDada);
    puts("AUX");
    mostrar(&pilaAux);
    puts("DATO");
    mostrar(&pilaDato);

    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°6----------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 6) Usando los resultados en el ejercicio 4, pasar lo elementos de una pila a otra de forma tal que la segunda pila
  quede ordena de mayor(tope) a menor(base). Esto se llama metodo de ordenacion por seleccion*/

/*int main()
{
    Pila pilaDada, pilaAux, pilaMenor;
    inicpila(&pilaDada);
    inicpila(&pilaAux);
    inicpila(&pilaMenor);

    char continuar;

    printf("PILA DADA\n");
    do
    {
        leer(&pilaDada);
        printf("Quiere ingresar otro dato? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while (continuar == 's' || continuar == 'S');

    while(!pilavacia(&pilaDada))
    {
        apilar(&pilaMenor, desapilar(&pilaDada));

        while(!pilavacia(&pilaDada))
        {
            if(tope(&pilaMenor) > tope(&pilaDada))
            {
                apilar(&pilaAux, desapilar(&pilaMenor));
                apilar(&pilaMenor, desapilar(&pilaDada));
            }
            else
            {
                apilar(&pilaAux, desapilar(&pilaDada));
            }
        }
        while (!pilavacia(&pilaAux))
        {
            apilar(&pilaDada, desapilar(&pilaAux));
        }
    }

    puts("PILA MENOR");
    mostrar(&pilaMenor);

    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°7----------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 7) Determinar si un elemento buscado está dentro de una pila. Al encontrarlo, finalizar la búsqueda.*/

/*int main()
{
    Pila pilaDada;
    inicpila(&pilaDada);

    int num = 0, basura;

    char continuar;

    do
    {
        leer(&pilaDada);
        printf("Quiere ingresar otro valor? s/n\n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while(continuar == 's' || continuar == 'S');

    printf("Ingrese el numero a buscar: \n");
    scanf("%i", &num);

    while(!pilavacia(&pilaDada) && tope(&pilaDada) != num)
    {
        basura = desapilar(&pilaDada);
    }

    if (!pilavacia(&pilaDada))
    {
        printf("Se a encontra el numero en la pila \n");
    }
    else
    {
        printf("No se a encontrado el numero en la pila \n");
    }

    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°8----------------------------------
     ---------------------------------------------------------------------------------  */


/**Ejercio 8) Eliminar un elemento de una pila. El eliminarlo, finalizar el recorrido y dejar el resto en el mismo orden.*/

/*int main()
{
    Pila pilaDada, pilaAux;
    inicpila(&pilaDada);
    inicpila(&pilaAux);

    int num = 0, basura;

    char continuar;

    do
    {
        leer(&pilaDada);
        printf("Quiere ingresar otro valor? s/n\n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while(continuar == 's' || continuar == 'S');

    printf("Ingrese el numero a buscar: \n");
    scanf("%i", &num);


    while(!pilavacia(&pilaDada))
    {
        if( tope(&pilaDada) != num)
        {
            apilar(&pilaAux, desapilar(&pilaDada));
        }
        else
        {
            basura = desapilar(&pilaDada);
        }

    }

    while(!pilavacia(&pilaAux))
    {
        apilar(&pilaDada, desapilar(&pilaAux));
    }


    printf("PILA DADA\n");
    mostrar(&pilaDada);

    printf("PILA AUX\n");
    mostrar(&pilaAux);

    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°9----------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 9) Verificar si una pila DADA es capicúa.*/

/*int main()
{
    Pila pilaDada, pilaAux, pilaAux2;
    inicpila(&pilaDada);
    inicpila(&pilaAux);
    inicpila(&pilaAux2);

    char continuar;

    do
    {
        printf("Cargar DADA\n");
        leer(&pilaDada);
        printf("/s/ para Continuar\n");
        printf("/n/ para Salir\n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while( continuar == 's' || continuar == 'S');

    while (!pilavacia(&pilaDada))
    {
        apilar(&pilaAux, tope(&pilaDada));
        apilar(&pilaAux2, desapilar(&pilaDada));
    }

    while(!pilavacia(&pilaAux2))
    {
        apilar(&pilaDada, desapilar(&pilaAux2));
    }

    while(tope(&pilaDada) == tope(&pilaAux) && !pilavacia(&pilaDada) && !pilavacia(&pilaAux))
    {
        desapilar(&pilaDada);
        desapilar(&pilaAux);
    }

    if(pilavacia(&pilaDada) && pilavacia(&pilaAux))
    {
        printf("El numero es capicua... \n");
    }
    else
    {
        printf("el numero NO es capicua... \n");
    }


    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°10---------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 10) Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre sí mismo),
   realizar un programa que calcule en la pila C la operación de unión.

   A: base ---> |1  2  3| <--- Tope
   B: base ---> |2  3  5  7| <-- Tope
   Pila AUB = base --> |3 2 1 7 5| <-- tope
   */

/*int main()
{
    Pila A, B, AUB;
    inicpila(&A);
    inicpila(&B);
    inicpila(&AUB);

    char continuar;

    do
    {
        printf("CARGA DE PILA A: \n");
        leer(&A);
        printf("Desea ingresar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while(continuar == 's' || continuar =='S');


    do
    {
        printf("CARGA DE PILA B: \n");
        leer(&B);
        printf("Desea ingresar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while(continuar == 's' || continuar =='S');


    while(!pilavacia(&A) && !pilavacia(&B) && tope(&A) != tope(&B))
    {
        apilar(&AUB, desapilar(&A));
        apilar(&AUB, desapilar(&B));
    }

    if(pilavacia(&A) && pilavacia(&B))
    {
        printf("PILA AUB: \n");
        mostrar(&AUB);
    }
    else
    {
        printf("Hay un o algunos valores repetidos.\n");
    }


    return 0;
}*/

/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°11---------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 11) Intercalar dos pilas ordenadas en forma creciente (ORDENADA1 y ORDENADA2)
   dejando el resultado en una pila también ordenada en forma creciente (ORDENADAFINAL). */

/*int main()
{
    Pila ORDENADA1, ORDENADA2, ORDENADAFINAL;
    inicpila(&ORDENADA1);
    inicpila(&ORDENADA2);
    inicpila(&ORDENADAFINAL);

    apilar(&ORDENADA1, 11);
    apilar(&ORDENADA1, 10);
    apilar(&ORDENADA1, 7);
    apilar(&ORDENADA1, 5);

    printf("PILA ORDENADA 1: \n");
    mostrar(&ORDENADA1);

    apilar(&ORDENADA2, 12);
    apilar(&ORDENADA2, 9);
    apilar(&ORDENADA2, 6);
    apilar(&ORDENADA2, 4);

    printf("PILA ORDENADA 2: \n");
    mostrar(&ORDENADA2);

    while(!pilavacia(&ORDENADA1) && !pilavacia(&ORDENADA2))
    {
        if(tope(&ORDENADA1) > tope(&ORDENADA2))
        {
            apilar(&ORDENADAFINAL, desapilar(&ORDENADA2));
            apilar(&ORDENADAFINAL, desapilar(&ORDENADA1));
        }
        else
        {
            apilar(&ORDENADAFINAL, desapilar(&ORDENADA1));
            apilar(&ORDENADAFINAL, desapilar(&ORDENADA2));
        }
    }
    printf("ORDENAR FINAL:\n");
    mostrar(&ORDENADAFINAL);

    return 0;
}*/


/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°12---------------------------------
     ---------------------------------------------------------------------------------  */

/**Ejercicio 12) Dada la pila ORIGEN ordenarla en forma ascendente por método de inserción dejando el resultado en la pila ORIGEN.
   Para este ejercicio usar lo aprendido para el ejercicio 5.*/

int main()
{
    Pila pilaDada, pilaAux, pilaMenor, pilaNum, pilaAux2;
    inicpila(&pilaDada);
    inicpila(&pilaAux);
    inicpila(&pilaMenor);
    inicpila(&pilaNum);
    inicpila(&pilaAux2);

    char continuar;

    printf("PILA DADA\n");
    do
    {
        leer(&pilaDada);
        printf("Quiere ingresar otro dato? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while (continuar == 's' || continuar == 'S');

    printf("DATO A INSERTAR\n");
    do
    {
        leer(&pilaNum);
        printf("Quiere ingresar otro valor? s/n \n");
        fflush(stdin);
        scanf("%c",&continuar);
    }
    while(continuar == 's' || continuar == 'S');

    while(!pilavacia(&pilaDada))
    {
        apilar(&pilaMenor, desapilar(&pilaDada));

        while(!pilavacia(&pilaDada))
        {
            if(tope(&pilaMenor) > tope(&pilaDada))
            {
                apilar(&pilaAux, desapilar(&pilaMenor));
                apilar(&pilaMenor, desapilar(&pilaDada));
            }
            else
            {
                apilar(&pilaAux, desapilar(&pilaDada));
            }
        }
        while (!pilavacia(&pilaAux))
        {
            apilar(&pilaDada, desapilar(&pilaAux));
        }
    }

    while(!pilavacia(&pilaMenor))
    {
        apilar(&pilaAux2, desapilar(&pilaMenor));
    }

    while(!pilavacia(&pilaAux2))
    {
        apilar(&pilaDada, desapilar(&pilaAux2));
    }

    puts("PILA DADA1");
    mostrar(&pilaDada);

    while(!pilavacia(&pilaDada) && !pilavacia(&pilaNum))
    {
        while(tope(&pilaDada) < tope(&pilaAux))
        {
            apilar(&pilaAux, desapilar(&pilaDada));
        }
        apilar(&pilaDada, desapilar(&pilaNum));
        while(!pilavacia(&pilaAux))
        {
            apilar(&pilaDada, desapilar(&pilaAux));
        }
    }

    puts("PILA DADA FINAL");
    mostrar(&pilaDada);

    return 0;
}


/*    while(!pilavacia(&pilaDada) && !pilavacia(&pilaDato))
    {
        while(tope(&pilaDada) < tope(&pilaAux))
        {
            apilar(&pilaAux, desapilar(&pilaDada));
        }
        apilar(&pilaDada, desapilar(&pilaDato));
        while(!pilavacia(&pilaAux))
        {
            apilar(&pilaDada, desapilar(&pilaAux));
        }

    }

    return 0;


/**  ---------------------------------------------------------------------------------
     ----------------------------------EJERCICIO N°13---------------------------------
     ---------------------------------------------------------------------------------  */
/**Ejercicio 13) Suponer un juego de cartas en el que en cada mano se reparten dos cartas por jugador.
   Un jugador gana la mano cuando la suma de sus cartas es mayor que las del contrario y
   al hacerlo coloca todas las cartas (las de él y las de su rival) en su pila de puntos.
   En caso de empate (y para simplificar) siempre gana el jugador1. Simular la ejecución del juego de tal manera que dada una pila MAZO
   (con un número de elementos múltiplo de cuatro) distribuya las cartas en las pilas PUNTOSJUG1 y PUNTOSJUG2 como si estos hubieran jugado.
    Utilizar las pilas auxiliares que crea conveniente.*/
