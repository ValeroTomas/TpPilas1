#include <stdio.h>
#include <stdlib.h>
#include "pila.h"



int main()
{
    int num;
    int i;
    int opt;
    int flag;
    int cantA,cantB;
    Pila dada,aux1,aux2,origen,destino,distintos,mazo,jugador1,jugador2,A,B,modelo,limite,mayores,menores,par,impar,pila1,pila2,descarte,filtro;
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
    inicpila(&filtro);

    printf("==========================================\n");
    printf("=                TP1 PILAS               =\n");
    printf("==========================================\n");
    printf("= -Ejercicio 1             -Ejercicio 8  =\n");
    printf("= -Ejercicio 2             -Ejercicio 9  =\n");
    printf("= -Ejercicio 3             -Ejercicio 10 =\n");
    printf("= -Ejercicio 4             -Ejercicio 11 =\n");
    printf("= -Ejercicio 5             -Ejercicio 12 =\n");
    printf("= -Ejercicio 6             -Ejercicio 13 =\n");
    printf("= -Ejercicio 7             -Ejercicio 14 =\n");
    printf("==========================================\n");
    printf("\n\nOpcion: ");


    scanf("%d", &opt);

    switch(opt)
    {

    //EJERCICIO 1 COMPLETO**
    case 1:

        //Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos que se
        //encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.

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

        printf("Pila con 3 numeros: \n");
        mostrar (&aux1);
        printf("Pila con 2 numeros: \n");
        mostrar(&aux2);
        printf("Pila inicial: \n");
        mostrar(&dada);
        break;

    //EJERCICIO 2 COMPLETO**
    case 2:

        //Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar todos los
        //elementos de la pila ORIGEN a la pila DESTINO.

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

        //Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.

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

        //Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar los elementos de
        //la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.

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

        //Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos
        //cargados originalmente en ella, pero en orden inverso.

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

    //EJERCICIO 6 COMPLETO**
    case 6:

        //Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes
        //elementos en el mismo orden.

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

    //EJERCICIO 7 COMPLETO**
    case 7:

        //Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes
        //elementos en el mismo orden.

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

    //EJERCICIO 8 COMPLETO**
    case 8:

        //Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.

        for(i=0; i<50; i++)
        {
            leer(&dada);
            srand(time(NULL));
            num=rand()%2;
            if(num==1)
            {
                apilar(&aux1, desapilar(&dada));
            }
            else
            {
                apilar (&aux2, desapilar(&dada));
            }
            mostrar (&aux1);
            mostrar (&aux2);
        }


        break;

    //EJERCICIO 9 COMPLETO**
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

    //EJERCICIO 10 COMPLETO**
    case 10:

        //Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales (en cantidad de elementos, valores que
        //contienen y posición de los mismos). Mostrar por pantalla el resultado.

        //CARGAMOS PILA A
        printf("\n\nCuantos numeros va a ingresar? \n");
        num = 0;
        scanf("%d", &num);
        for(i=0; i<num; i++)
        {
            leer(&A);
        }

        //CARGAMOS PILA B
        printf("\n\nCuantos numeros va a ingresar? \n");
        num = 0;
        scanf("%d", &num);
        for(i=0; i<num; i++)
        {
            leer(&B);
        }

        //FLAG se usa para registrar si es que hay diferencia entre los topes.
        flag = 0;

        //Recorremos A y B hasta que alguna de las dos se vacíe.
        while(!pilavacia(&A) && !pilavacia(&B))
        {
            if(tope(&A)!=tope(&B))
            {
                flag = 1;
            }
            apilar(&aux1, desapilar(&A));
            apilar(&aux2, desapilar(&B));
        }

        //pilavacía devuelve 0 en caso de estar vacía y un 1 en caso de no estarlo. Comparamos si los valores son iguales.
        //Si no coinciden significa que una tenía menos elemenos que la otra
        if(pilavacia(&A) == pilavacia(&B))
        {
            printf("\nLa cantidad de elementos coincide\n");
        }
        else
        {
            printf("\nLa cantidad de elementos no coincide\n");
        }

        //Si flag registró que algún valor desigual entonces mostrará que los valores no coincidían. Caso contrario coinciden.
        if(flag== 1)
        {
            printf("\nLa posicion o los elementos no coinciden\n");
        }
        else
        {
            printf("\nLa posicion y los elementos coinciden\n");
        }
        break;

    //EJERCICIO 11 COMPLETO**
    case 11:

        //Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los
        //elementos que sean iguales al tope de la pila MODELO.

        srand(time(NULL));
        for(i=0; i<5; i++)
        {
            apilar(&modelo, rand()%4+1);
        }
        for(i=0; i<5; i++)
        {
            apilar(&dada, rand()%4+1);
        }
        printf("PILA MODELO\n");
        mostrar(&modelo);
        printf("PILA DADA\n");
        mostrar(&dada);
        while(!pilavacia(&dada))
        {
            if (tope(&dada)== tope(&modelo))
            {
                apilar(&aux1, desapilar(&dada));
            }
            else
            {
                apilar(&aux2, desapilar(&dada));
            }
        }
        while (!pilavacia(&aux2))
        {
            apilar(&dada, desapilar(&aux2));

        }
        printf("PILA DADA\n");
        mostrar(&dada);
        printf("NUMEROS ELIMINADOS \n");
        mostrar(&aux1);
        break;

    //EJERCICIO 12 COMPLETO**
    case 12:

        //Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los elementos que existan en MODELO.

        num=1;
        for(i=0; i<10; i++)
        {
            apilar(&dada, num);
            num++;
        }
        mostrar(&dada);
        apilar(&modelo, 2);
        apilar(&modelo, 5);
        apilar(&modelo, 6);
        mostrar(&modelo);

        //Recorremos MODELO hasta que esté vacía.
        while(!pilavacia(&modelo))
        {
            //recorremos DADA hasta que esté vacía.
            while(!pilavacia(&dada))
            {
                //si hay una coincidencia entonces se descarta.
                if(tope(&modelo)==tope(&dada))
                {
                    apilar(&descarte, desapilar(&dada));
                }
                //si no hay coincidencia se mantiene en AUX1.
                else
                {
                    apilar(&aux1, desapilar(&dada));
                }
            }
            //pasamos a hacer el check con el próximo valor de MODELO.
            apilar(&aux2, desapilar(&modelo));
            //volvemos a apilar los valores válidos de AUX a DADA para así volver a comprobar con el siguiente valor en MODELO (si existe).
            while(!pilavacia(&aux1))
            {
                apilar(&dada, desapilar(&aux1));
            }
        }

        printf("\nPila filtrada:\n");
        mostrar(&dada);
        printf("\nPila basura:\n");
        mostrar(&descarte);
        break;

    //EJERCICIO 13 COMPLETO**
    case 13:

        //Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores
        //o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.

        printf("\n\nCual va a ser el limite? \n");
        leer(&limite);

        printf("\n\nCuantos numeros va a ingresar? \n");
        num = 0;
        scanf("%d", &num);
        for(i=0; i<num; i++)
        {
            leer(&dada);
        }

        while(!pilavacia(&dada))
        {
            if(tope(&dada)>=tope(&limite))
            {
                apilar(&mayores, desapilar(&dada));
            }
            else
            {
                apilar(&menores, desapilar(&dada));
            }
        }

        printf("\nLimite:\n");
        mostrar(&limite);
        printf("\nPila mayores:\n");
        mostrar(&mayores);
        printf("\nPila menores:\n");
        mostrar(&menores);
        break;

    //EJERCICIO 14
    case 14:

        //Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope
        //de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)


        break;

    default:
        printf("\nNo es una opcion valida.\n");
        ;

    }
}
