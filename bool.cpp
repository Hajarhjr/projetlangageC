#include<iostream>
#include <stdbool.h>

    bool estPair(int nombre) {
    return nombre % 2 == 0;
}
   
  int main() {
    int numero;
    printf("Entrez un nombre entier : ");
    scanf("%d", &numero);

    
    if (estPair(numero)) {
        printf("%d est un nombre pair.\n", numero);
    } else {
        printf("%d est un nombre impair.\n", numero);
    }

    return 0;
}
