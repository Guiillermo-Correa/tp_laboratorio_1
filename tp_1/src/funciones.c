/*
 * funciones.c
 *
 *  Created on: 12 sep. 2020
 *      Author: Guille
 */

#include "funciones.h"


float suma(float numeroUno, float numeroDos)
{

    float sumar ;
    sumar= numeroUno + numeroDos;

    return sumar;
}

float resta(float numeroUno, float numeroDos)
{
    float restar ;

    restar= numeroUno - numeroDos;

    return restar;
}


float multiplicacion(float numeroUno ,float numeroDos)
{
    float multiplicar;

    multiplicar = numeroUno * numeroDos;

    return multiplicar;
}


float division(float numeroUno, float numeroDos)
{
    float dividir;

    dividir=(float) numeroUno/numeroDos;

    return dividir;
}


float factorial(float numeroUno)
{
    int i;
    float fact = 1;

    for(i = 1; i <= numeroUno; i++)
    {
        fact =fact * i;
    }

    return fact;

}

float fact(float numeroDos)
{
    int i;
    float fact = 1;

    for(i = 1; i <= numeroDos; i++)
    {
        fact =fact * i;
    }

    return fact;

}
