/*NB: test x=0*/


#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main() {
    unsigned int x;
    unsigned int res1 = 0, res2 = 0, res3 = 0;

    //INPUT: x must be the input value, do not overwrite it 
    printf("Enter a positive integer: "); scanf("%u", &x);
    //calculate here

    int a = 0;                          //inizializzo le variabili
    int b = x;
    int c = 0;
    int d = x;
    int i = 0;
    int count = 0;
    int n = 0;

    if (b == 0)                         //caso speciale x = 0
    {
        res2 = 10;
    }
    else
    {
        n = log10(x) + 1;               //conto il numero delle cifre del numero x
        res2 = pow(10, n) - x;          //formula del complemento a 10
    }


    while (d > 0)                       //ciclo while che si ripete finché x>0
    {
        a = d % 10;                     //calcolo il resto della variabile x fratto 10
        res1 = (res1 * 10) + a;         //a ogni ciclo il res1 aumenta di una decina in modo da aggiungere il resto alla fine del numero                          
        d /= 10;                        //uso la divisione per avanzare di cifra
    }

    if (b == 0)                         //caso speciale x = 0
    {
        res3 = 1;
    }
    else
    {
        for (i = 0; b > 0; i++)         //ciclo for per contare quanti zeri contiene il numero x
        {
            c = b % 10;                 //trovo il resto
            if (c == 0) { count++; }    //verifico se il resto è 0 e quindi l'ultima cifra è zero
            b /= 10;                    //passo alla cifra seguente
        }

        res3 = count;
    }


    //do NOT add code after this point
    //OUTPUT
    printf("Actual result:\n");
    printf("%u %u %u\n", res1, res2, res3);

    //DON'T REMOVE from submittion
#ifdef EVAL
    eval(x, res1, res2, res3);
#endif
    return;
}