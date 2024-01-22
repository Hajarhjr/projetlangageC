#include <stdio.h>
#include <stdlib.h>

void Trier (int tableau[],int taille) {
    for (int i = 0; i<taille; i++) {
            for (int j = i + 1; j<taille; j++) {
                if (tableau[i] > tableau[j]) {
                    int x = tableau[i];
                    tableau[i] = tableau[j];
                    tableau[j] = x;
                }
            }

    }


}
int main () {
    int tableau[] = {9,5,4,12,82,13,0,71,-6};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    printf("le tableau avant le tri:\n");
    for(int i=0;i<taille;i++) {
            printf("%d",tableau[i]);
            printf("\n");

    }
    Trier(tableau,taille);
    printf("le tableau apres le tri:\n");
    for (int i=0;i<taille;i++) {
        printf("%d",tableau[i]);
        printf("\n");
    }

    return 0;


}
