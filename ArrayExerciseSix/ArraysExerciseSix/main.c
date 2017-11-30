/*
 *  Français:
 *  Programme qui lit deux tableaux d’entiers a et b
 *  et qui ajoute les éléments de b à la fin de a.
 *  Le nombre d’éléments de a et de b est demandé à l’utilisateur
 */

/*
 *  English:
 *  This program reads two arrays of integers a and b
 *  and adds all the elements of b to the end of a.
 *  The size of the arrays a and b are defined by the user (at runtime).
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int     ArrSize[2]
           ,*a
           ,*b;
    char    ArrLetter = 'a';
    

    for (int i = 0; i < 2; ++i)
    {
        printf("Veuillez introduire le nombre d'éléments du tableau %c: "
                                                                    ,ArrLetter + i
              );
        scanf("%i", &ArrSize[i]);
    }// for i

    // Now that we know about their size, allocate memory for the arrays
    a = malloc( ( ArrSize[0] + ArrSize[1]) * sizeof(int) );
    b = malloc( ( ArrSize[1] ) * sizeof(int) );
    if (a == NULL || b == NULL) exit(1);// Something went wrong just exit.

    for (int j = 0; j < 2; ++j)
    {
        for (int x = 0; x <= ArrSize[j]; ++x)
        {
            printf("Veuillez introduire l'élément numéro %i du tableau %c: ",
                                                          x + 1,        ArrLetter + j
            );

            if (j == 0)
            {
                scanf("%i", &a[x]);
            }// if
            else if (j == 1)
            {
                scanf("%i", &b[x]);
                a[ (ArrSize[0] + x ) ] = b[x];
            }// else
        }// for x
    }// for j
    
    // Deallocate the memory for a[] and b[]
    free(a);
    free(b);
    return 0;
}// main
