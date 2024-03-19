#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funciones
//1
int numRandom ();
//2
void mostarMenorMayor (int uno, int dos, int tres);




int main()
{
    int caso;
    int numAleatorio;
    int num1, num2, num3;

    printf("ingrese un numero del 1 al 7:");
    scanf("%d", &caso);

    switch (caso)
    {

    case 1:



        numAleatorio = numRandom();
        printf("numero aleatorio: %d\n", numAleatorio);



        break;

    case 2:
printf("ingrese tres numeros enteros distintos\n");
scanf("%d %d %d",num1, num2,num3);


 mostarMenorMayor(num1,num2,num3);


        break;

    case 3:



        break;

    case 4:



        break;

    case 5:




        break;

    case 6:



        break;

    case 7:



        break;
    default:
        printf("error, caso inexistente.");
        printf("ingrese un numero del 1 al 7:");
        scanf("%d", &caso);
    }



    return 0;
}
//funciones
//1

int numRandom ()
{
    srand(time (NULL));

    return rand()%100;
}
//2

void mostarMenorMayor (int uno, int dos, int tres)
{
    int menor= uno;
    int mayor = dos;

    if (dos < menor)
    {
        menor = dos;
    }
    else if (tres < menor)
    {

        menor = tres;
    }
    else
    {
        menor = uno;
    }
//---------------------------
    if (uno < mayor)
    {
        mayor = uno;
    }
    else if (tres < mayor)
    {

        mayor = tres;
    }
    else
    {
        mayor = dos;
    }

printf("el menor numero es : %d y el mayor numero es : %d.\n", menor, mayor);
}


