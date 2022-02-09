#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 50

int main()
{
    srand(time(NULL));
    /**
    para crear valores al azar podemos utilizar la funcion rand o srand
    la diferencia es que con rand, se toma una semilla que siempre es la misma, esto hace que al ejecutar
    varias veces el programa, los valores aeatorios siempre sean los mismos
    en contrario la funcion srand toma una semilla "time" que es del reloj del sistema, el cual sera variable
    y por lo tanto los valores aleatorios seran siempre aleatorios
    para esta funcion llamamos una sola vez srand y posteriormente rand tomara esa semilla
    **/
    int frecuencia [TAM];
    double mayorEdad=0.0,prom=0.0;
    int edad,i;

    printf("El siguiente programa calcula el promedio de personas que\n ");
    printf("son mayores de edad de entre 50 edades al azar.\n");

    /**
    se generan las 50 edades al azar y se agregan a la lista
    **/
    for(i=0;i<TAM;i++)
    {
        /**
        rand se manda llamar dentro del for para que se generen 50 veces el numero aleatorio
        para despues guardarlo en frecuencia en el espacio i
        i empieza en 0 por que los arreglos, las posiciones empiezan en 0
        **/
        edad=rand()%99;
        frecuencia[i]=edad;
    }
    /**
    mostramos la lista
    **/
    for(i=0;i<TAM;i++)
    {
        printf("%d ",frecuencia[i]);
    }
    /**
    vemos cuantos son mayores de edad y sacamos el promedio
    **/
    for(i=0;i<TAM;i++)
    {
        if(frecuencia[i]>=18)
            mayorEdad=mayorEdad+1;
    }
    /**
    mayorEdad se declaro como flotante debido a que al hacer la division, si mayorEdad hubiese sido entero 
    la division hubiese sido entero / entero igual a un flotante y el resultado nos daria siempre cero
    **/
    prom=mayorEdad/TAM;

    printf("El promedio de mayores de edad es...[ %f ]",prom);

}
