#include<iostream>
int main(){
	int mois;
	
    printf("Entrez le numero du mois (1-12) : ");
    scanf("%d", &mois);

    
    switch (mois) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Le mois %d a 31 jours.\n", mois);
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("Le mois %d a 30 jours.\n", mois);
            break;

        case 2:
            printf("Le mois 2 a generalement 28 ou 29 jours.\n");
            break;

        default:
            printf("Numero de mois invalide.\n");
    }
    return 0;
}
