//  Lire dix nombres et calculer l’écart de chaque nombre par rapport à la moyenne.

#include <stdio.h>
#define TEN 10
/*
 *  The reason I use #define and not a const is so that
 *  the value is set at buildtime and not runtime.
 */
int main(){
    int      numbers[TEN]
            ,i;
    double   mean = 0.0;

    for (i = 0; i <TEN; i++)
    {
        printf("Veuillez introduire le nombre numéro %i: ", i+1);
        scanf("%i", &numbers[i]);
        mean += numbers[i];
    }
    mean /= TEN;

    for (i=0; i<TEN; i++)
    {
        printf("l'écart par rapport à la moyenne pour le nombre %i est de: %.4lf\n", numbers[i],(double)numbers[i]-mean);
    }
    return 0;
}
