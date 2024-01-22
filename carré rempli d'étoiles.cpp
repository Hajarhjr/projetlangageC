#include<iostream>
int main()
{ /*int n;
	printf("entrer le nombre de lignes");
	 scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{   
	       for(int j=1;j<=n;j++)
	       { 
	       	  printf("* ");
	       	  
	       	   }
	       	   printf("\n");
	
		
	}*/
	
 	int n;

    printf("entrer le nombre de lignes pour le carré : ");
    scanf("%d",&n);  
      printf(" le Carre d'etoiles :\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
