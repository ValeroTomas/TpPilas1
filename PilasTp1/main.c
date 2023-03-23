#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <windows.h>



int main()
{
    int num;
    int i;
    int opt;
    int cantA;
    int cantB;
    Pila dada,aux1,aux2,origen,destino,distintos,mazo,jugador1,jugador2,A,B,modelo,limite,mayores,menores,par,impar,pila1,pila2,descarte;
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);
    inicpila(&origen);
    inicpila(&destino);
    inicpila(&distintos);
    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);
    inicpila(&A);
    inicpila(&B);
    inicpila(&modelo);
    inicpila(&limite);
    inicpila(&mayores);
    inicpila(&menores);
    inicpila(&par);
    inicpila(&impar);
    inicpila(&pila1);
    inicpila(&pila2);
    inicpila(&descarte);

    printf("==========================================\n");
    printf("=                TP1 PILAS               =\n");
    printf("==========================================\n");
    printf("= -Ejercicio 1             -Ejercicio 7  =\n");
    printf("= -Ejercicio 2             -Ejercicio 8  =\n");
    printf("= -Ejercicio 3             -Ejercicio 9  =\n");
    printf("= -Ejercicio 4             -Ejercicio 10 =\n");
    printf("= -Ejercicio 5             -Ejercicio 11 =\n");
    printf("= -Ejercicio 6             -Ejercicio 12 =\n");
    printf("==========================================\n");
    printf("\n\nOpcion: ");


    scanf("%d", &opt);

    switch(opt)
    {

    //EJERCICIO 1 COMPLETO**
    case 1:
        for (i=0; i<5; i++)
        {
            leer (&dada);
        }


        for (i=0; i<3; i++)
        {
            apilar(&aux1, desapilar(&dada));
        }
        while (!pilavacia (&dada))
        {
            apilar(&aux2, desapilar (&dada));
        }

        printf("\nPila con 3 numeros: \n");
        mostrar (&aux1);
        printf("\nPila con 2 numeros: \n");
        mostrar(&aux2);
        printf("Pila inicial: \n");
        mostrar(&dada);
        break;

    //EJERCICIO 2 COMPLETO**
    case 2:
        printf("\n\nCuantos numeros va a ingresar? \n");
        scanf("%d", &num);
        for(i=0; i<num; i++)
        {
            leer(&origen);
        }
        while (!pilavacia(&origen))
        {
            apilar(&destino, desapilar(&origen));

        }
        printf ("Pila ORIGINAL: \n ");
        mostrar(&origen);
        printf("Pila DESTINO: \n ");
        mostrar(&destino);
        break;

    //EJERCICIO 3 COMPLETO**
    case 3:
        printf("\n\nCuantos numeros va a ingresar? \n");
        scanf("%d", &num);
        for(i=0; i<num; i++)
        {
            leer(&dada);
        }
        while(!pilavacia(&dada))
        {
            if (tope(&dada) == 8)
            {
                apilar(&aux1, desapilar(&dada));
            }
            else
            {
                apilar(&distintos,desapilar(&dada));
            }

        }
        printf("\nNumeros distintos a 8:\n");
        mostrar(&distintos);
        printf("\nNumeros 8:\n");
        mostrar(&aux1);
        break;

    //EJERCICIO 4 COMPLETO**
    case 4:
        printf("\n\nCuantos numeros va a ingresar? \n");
        scanf("%d", &num);
        for(i=0; i<num; i++)
        {
            leer(&origen);
        }
        while(!pilavacia(&origen))
        {
            apilar (&aux1, desapilar (&origen));
        }
        while(!pilavacia(&aux1))
        {
            apilar (&destino, desapilar (&aux1));
        }
        mostrar(&destino);
        break;

    //EJERCICIO 5 COMPLETO**
    case 5:
        printf("\n\nCuantos numeros va a ingresar? \n");
        scanf("%d", &num);
        for(i=0; i<num; i++)
        {
            leer(&dada);
        }
        while(!pilavacia(&dada))
        {
            apilar (&aux1, desapilar (&dada));
        }
        mostrar (&aux1);

        break;

    case 6:
        printf("\nINGRESANDO NUMEROS AL AZAR...\n");
        srand(time(NULL));
        for(i=0; i<5; i++)
        {
            apilar(&dada, rand()%98+1);
        }
        printf("PILA INICIAL\n");
        mostrar(&dada);


        apilar(&aux1, desapilar(&dada));

        while(!pilavacia(&dada))
        {
            apilar(&aux2, desapilar(&dada));
        }
        while(!pilavacia(&aux2))
        {
            apilar(&aux1, desapilar(&aux2));
        }
        printf("PILA CON TOPE EN BASE\n");
        mostrar(&aux1);

        break;

    case 7:
        printf("\nINGRESANDO NUMEROS AL AZAR...\n");
        srand(time(NULL));

        srand(time(NULL));
        for(i=0; i<5; i++)
        {
            apilar(&dada, rand()%98+1);
        }
        printf("PILA INICIAL\n");
        mostrar(&dada);



        while(!pilavacia(&dada))
        {
            apilar(&aux1, desapilar(&dada));
        }
        apilar(&aux2, desapilar (&aux1));
        while (!pilavacia(&aux1))
        {
            apilar (&dada,desapilar(&aux1));
        }
        apilar (&dada, desapilar(&aux2));
        mostrar (&dada);
        break;

    case 8:
        //Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa
        //srand(time(NULL));
        num = 1;
        for (i=0; i<50; i++)
        {

            apilar (&mazo,num);
            num = num+1;
        }

        while (!pilavacia(&mazo))
        {
            apilar (&jugador1, desapilar(&mazo));
            apilar (&jugador2, desapilar(&mazo));
        }
        mostrar (&jugador1);
        mostrar (&jugador2);




        break;

    case 9:
        //Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
        cantA=0;
        cantB=0;
        for (i=0; i<10; i++)
        {
            apilar(&aux1, 5);
        }
        while (!pilavacia(&aux1))
        {
            apilar (&A, desapilar (&aux1));
            cantA=cantA+1;
            apilar (&B, desapilar (&aux1));
            cantB=cantB+1;
        }
        printf ("PILA A TIENE: %i\n",cantA);
        printf ("PILA B TIENE: %i\n",cantB);

        break;

    case 10:
        //Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales
        //(en cantidad de elementos, valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.

        break;

    case 11:

        break;

    case 12:
            //Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA
            // todos los elementos que existan en MODELO.


        break;

    default:
        ;

    }
}
