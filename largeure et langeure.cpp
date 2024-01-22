#include<iostream>
int main(){
	 float longueur, largeur, aire;

    
    printf("entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    printf("entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    
    aire = longueur * largeur;

    printf("L'aire du rectangle est : %f\n", aire);

    return 0;
}
