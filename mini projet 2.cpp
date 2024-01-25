#include <stdio.h>

void rempliecode(int T[], int taille) {
    printf("Entrez le code du produit  :\n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &T[i]);
        }
}
void rempliequanti(int tab[], int taille) {
    printf("Entrez la quantite  :\n");
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
        }
}

void supprimer(int codeProduit, int Quantite) {
    
}

void affichageC(int T[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Le code du produit est %d ",T[i]);
    }
}
void affichageQ(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("la quantite est %d ",tab[i]);
    }
}

void menu(int T[], int taille) {
    int choix;
 while (choix !=4) {
    printf("Programme de Gestion de Stock \n");
    printf("1- Ajouter un produit au stock\n");
    printf("2- Retirer un produit du Stock\n");
    printf("3- Afficher le stock total\n");
    printf("4- Quitter le programme\n");
    printf("Veuillez entrer votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            rempliecode(T, taille);
            rempliequanti(tab,taille);
            
            break;
        case 2:
            
            break;
        case 3:
            affichage(T, taille);
            break;
        case 4:
            printf("Vous êtes hors du programme. A bientot!\n");
            break;
        default:
            printf("Veuillez entrer un choix valide!\n");
            break;
    }
}
}

int main() {
    int taille ;
    int T[100]; 
    
    menu(T,taille);
        
            
        
    

    return 0;
}

