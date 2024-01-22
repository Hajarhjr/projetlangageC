#include<stdio.h>
int taille;
int Affiche_Carre(int tab[10])
{int i; 
	for(i=0;i<10;i++){
		tab[i]=tab[i]*tab[i];
	}	
}
int carre(int a)
{ 
    return a*a;
}

int main()

{ 
  
  int tab[10];
      int b;
       printf("entrez les elements du tableau 100 entiers :\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &tab[i]);
    }
	    printf("le caree delements du tabmeau %d \n",Affiche_Carre(tab));
	
	 printf("entrez un nombre pour obtenir son carre :\n ");
     scanf("%d", &b);
    	printf("le carre de nombre  est %d",carre(b));

}

