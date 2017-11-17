//  Lire un nombre entier positif et afficher son écriture héxadécimale dans le bon ordre.

#include <stdio.h>

int main() {
    int     num;

    printf("Veillez introduire un nombre entier positif: ");
    scanf("%i", &num);
    printf("Le nombre %i est: %x en hexadécimal \n", num, num);


    return 0;
}
/*
 *  Yes. I can do it using an array as requested but that'd be a really bad way to do it.
 *  If you think my answer is wrong, it isn't, the question is.
 */
