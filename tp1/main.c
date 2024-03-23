#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funciones
//1 Desarrollar una funcion que devuelva un valor RANDOM en el rango de 0 a 100.
int numRandom ();

//2 Disenie una funcion que reciba 3 numeros enteros y muestre el mayor y el menor.
void mostarMenorMayor (int uno, int dos, int tres);

//3 Dise�e una funcion que reciba un n�mero entero N y realice la suma de los numeros
// enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.
int sumaPositivosMenores (int numero);

//4 Desarrollar una funcion que muestre la tabla de multiplicar de un número entero recibido por parametro.
void tablaMultiplicacion (int numero);

//5 Realice una pequeña calculadora, utilizando funciones (una función de suma, una de multiplicación, una de resta, una de división…)

void suma ();
void resta ();
void multiplicacion();
void division ();
void calculadora ();

//6 Realizar una función que reciba un número positivo entero por parámetro por referencia, y cambie su signo a negativo.
void cambiarSigno (int *num);

//7 Realizar una función que reciba dos números enteros por parámetro por referencia y cargue sus valores el usuario dentro de la función.
void cambioValores (int *num1, int *num2);


int main()
{
    int caso;
    int numAleatorio;
    int num1, num2, num3;
    int sumaN;
    int tabla;

    int x =5, y = 10;

    printf("ingrese un numero del 1 al 7:");
    scanf("%d", &caso);

    switch (caso)
    {

    case 1:
        printf("genera un numero aleatorio\n");



        numAleatorio = numRandom();
        printf("numero aleatorio: %d\n", numAleatorio);



        break;

    case 2:
        printf("muestra el menor y mayor numero ingresado\n");

        printf("ingrese tres numeros enteros distintos\n");
        scanf("%d %d %d",&num1,&num2,&num3);


        mostarMenorMayor(num1,num2,num3);


        break;

    case 3:
        printf("suma los positivos menores del numero ingresado\n");

        printf("ingrese un numero entero psoitivo\n");
        scanf("%d", &num1);

        sumaN = sumaPositivosMenores(num1);
        printf("la suma de los numeros positivos menores al ingresado es: %d",sumaN);


        break;

    case 4:
        printf("tabla de multiplicar\n");
        printf("ingrese un numero para mostrar su tabla");
        scanf("%d", &num1);

        tablaMultiplicacion(num1);


        break;

    case 5:

        printf("calculadora\n");

        calculadora();


        break;

    case 6:
        printf("cambiar signo\n");

        printf("ingrese un numero para cambiar su signo\n");
        scanf("%d", &num1);

         cambiarSigno(&num1);

        printf("el numero ingresado con su signo cambiado es :%d", num1);

        break;

    case 7:
printf("el usuario reasigna los valores de las variables");
printf("valores post funcion de x:%d e y:%d\n", x, y);
cambioValores(&x,&y);
printf("valores reasignados mediante funcion de x:%d e y:%d",x, y);

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
    if (uno > mayor)
    {
        mayor = uno;
    }
    else if (tres > mayor)
    {

        mayor = tres;
    }
    else
    {
        mayor = dos;
    }

    printf("el menor numero es : %d y el mayor numero es : %d.\n", menor, mayor);
}

//3

int sumaPositivosMenores (int numero)
{

    int num = numero;
    int suma;

    for (int i=0; i < num; i++ )
    {
        suma += i;
    }
    return suma;
}

//4

void tablaMultiplicacion (int numero)
{

    int suma;
    int multiplo;

    for (int i = 0; i <= 10; i++)
    {
        suma=i;
        multiplo=suma*numero;

        printf("%d x %d = %d \n ",suma, numero,multiplo);

    }
}

//5

void suma ()
{

    int n1;
    int n2;
    int suma;

    printf("ingrese dos numeros enteros");
    scanf("%d %d", &n1,&n2);

    suma= n1+n2;

    printf("---------------\n");
    printf("resultado : %d\n",suma);
    printf("---------------\n");

}

void resta ()
{
    int n1;
    int n2;
    int resta;

    printf("ingrese dos numeros enteros");
    scanf("%d %d", &n1,&n2);

    resta= n1-n2;

    printf("---------------\n");
    printf("resultado : %d\n",resta);
    printf("---------------\n");

}

void multiplicacion()
{

    int n1;
    int n2;
    int multiplicacion;

    printf("ingrese dos numeros enteros");
    scanf("%d %d", &n1,&n2);

    multiplicacion =n1 * n2;

    printf("---------------\n");
    printf("resultado : %d\n",multiplicacion);
    printf("---------------\n");

}

void division ()
{

    int n1;
    int n2;
    int division;

    printf("ingrese dos numeros enteros");
    scanf("%d %d", &n1,&n2);

    division = n1 / n2;

    printf("---------------\n");
    printf("resultado : %d\n",division);
    printf("---------------\n");

}

void calculadora ()
{
    int n1;
    int n2;
    int calculo;
    printf("mini calculadora \n ");

    printf ("para sumar presione 1 \n para restar presione 2 \n para multiplicar presione 3 \n para dividir presione 4 \n");
    scanf ("%d", &calculo);

    switch (calculo)
    {

    case 1:
        suma ();
        break;

    case 2:

        resta();
        break;

    case 3:
        multiplicacion();
        break;

    case 4:
        division();
        break;

    default:
        printf("error, eso no se puede.");
        printf("para sumar presione 1 \n para restar presione 2 \n para multiplicar presione 3 \n para dividir presione 4 \n");
        scanf("%d",&calculo);
    }
}
//6
void cambiarSigno (int *num)
{
    *num=  -*num ;
}

//7
void cambioValores (int *num1, int *num2){

    int a, b;

printf("ingrese el nuevo valor para la primer variable:");
scanf("%d", &a);

*num1= a;
printf("ingrese el nuevo valor para la segunda variable:");
scanf("%d", &b);

*num2= b;

}


