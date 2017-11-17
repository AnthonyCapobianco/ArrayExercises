//  Lire un nombre entier positif et afficher son écriture binaire dans le bon ordre.

#include <stdio.h>
#include <math.h>

int main() {
    int     binary[16]
            ,decimal;

    printf("Veuillez introduire un nombre entier positif: ");
    scanf("%i", &decimal);
    printf("Le nombre %i, en binaire, s'écrit: \n", decimal);
    for (int i = 15; i > -1; i--) {
        binary[i] = decimal %2;
        decimal /= 2;
    }

    for (int i = 0; i < 16; i++) {
        if (i %4 == 0) {  /*  This is really not necessary, it just makes it more readable   */
            printf(" ");
        }
        printf("%i", binary[i]);

    }
    printf("\n");
    return 0;
}

