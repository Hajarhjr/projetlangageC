#include<stdio.h>
int choix;
int remplie(int T[][2], int taille){
	
    printf("ecrire le code de produit et sa quantite\n");
    for(int i=taille; i<taille+1;i ++){
        for (int j=0; j<2; j++){
            scanf("%d", &T[i][j]);
        }
    } 
    taille = taille+1;

    int menu();
}


int retirer(int codeProduit, int Quantite){


}
void affichage(int T[][2], int taille){
    printf("voila les produit de stock:\n");
    for(int i=taille; i<taille+1;i ++){
    
        printf("le code de produit est %d sa contite est %d \n",  T[i][0],T[i][1]);
        
    }
}
  void menu(){
  	int choix;
     int taille=0;
    int T[taille][2];
    while(choix!=4){
	
    printf("Programme de Gestion de Stock \n");
    printf("1- Ajouter un produit au stock\n");
    printf("2- Retirer un produit du Stock\n");
    printf("3- Afficher le stock total\n");
    printf("4- Quitter le programme\n");
    printf(" ENAA, Copyright tout droit reserver\n");
    printf("Veuillez entrer votre choix : ");
    scanf("%d", &choix);
    switch(choix){
        case 1:
        remplie(T,taille);
        break;
        case 2:


        break;
        case 3:
         affichage(T,taille);
        break;
        case 4:
        printf("Vous etes hors du programme, A bientot!");
        break;
        default:
        printf("Veuillez entrer un valid choix!\n");

        break;
}
    }}
int main(){
 //  int choix;
    menu();



    return 0;
}
