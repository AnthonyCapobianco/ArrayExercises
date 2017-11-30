//  Lire un nombre entier positif et afficher son écriture binaire dans le bon ordre.

#include <stdio.h>
#include <math.h>

void toBinary(unsigned int decimal){
    int binary[16];
    printf("Le nombre %u, en binaire, s'écrit: ", decimal);
    for (int i = 15; i > -1; i--)
    {
        binary[i] = decimal %2;
        decimal /= 2;
    }

    for (int i = 0; i < 16; i++)
    {
        if (i %4 == 0)  printf(" ");  /*  This is really not necessary, it just makes it more readable   */
        printf("%i", binary[i]);
    }
}

int main() {
    unsigned int decimal;
    do
    {
        printf("Veuillez introduire un nombre entier positif: ");
        scanf("%u", &decimal);
        toBinary(decimal);
        printf("\n");

    }while (1);
    return 0;
}
/*
 *  scanf("%u", &decimal);
 *  printf("%")
 */
