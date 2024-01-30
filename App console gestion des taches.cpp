#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i=0;
typedef struct{
	int day;
	int month;
	int year;
}date;
typedef struct{
	int id;
	char description [200];
	char priorite [200];
	date datedech;
}tach;
tach tab[100],t;
// method exist*************************************************************
  int exist(int id){
     
  	for(int j=0;j<i;j++)
  	{
  		if(tab[j].id==id)
  		{ 
  			return 1;
  		 }
  		    return 0;
	  }	 
  }
// method ajouter:***********************************************************
 int ajouter(){
 		
 		printf("donner le nombre de tache \n");
      	scanf("%d",&t.id);
   	// lutilisation de la method exist qui teste si le id est exist ou non Cela m'aide à rendre le code plus précis  
 	if(exist(t.id)==1)
 	{
 	    printf("le id de cette tache est deja exist \n");
 		
	 } else{
	 
	 printf("donner les information a ajouter :  description  priorite datedecheance \n");
	 	// utiliser scanf avec le format %[^\n] pour lire toute la ligne (y compris les espaces)
 	  scanf(" %[^\n]", t.description);
        scanf(" %[^\n]", t.priorite);
	 scanf("%d%d%d",&t.datedech.day,&t.datedech.month,&t.datedech.year);
	 tab[i]=t;
	 
	 i++;
	 printf("ajout bien fait \n");
	 }
 }

 // method afficher*******************************************************************
 void afficher()
{      
	for(int j=0;j<i;j++)
	{
   	printf(" les informations dans la tache %d sont:\n le ID : %d\n la description : %s\n priorite : %s\n datedechance :%d/%d/%d\n",
	   j+1,tab[j].id,tab[j].description,tab[j].priorite,tab[j].datedech.day,tab[j].datedech.month,tab[j].datedech.year);
	}	
}

//method modiffier*******************************
void modifier()
{  int choix;
    printf("donner le id de la tache a modifier \n");
    scanf("%d", &t.id);
// si le ID est exsist on doit commencer la modification
    if (exist(t.id) == 1) {
        for (int j = 0; j < i; j++) {
            while (choix != 5) {
                printf("pour modifier le id  taper 1 \n");
                printf("pour modifier la description taper 2 \n");
                printf("pour modifier la priorite taper 3\n");
                printf("pour modifier la date taper 4 \n");
                printf("pour  quitter taper 5 \n");
                scanf("%d", &choix);

                switch (choix) {
                    case 1:
                        printf("donner la nouvelle id \n");
                        scanf("%d", &tab[j].id);
                        break;
                    case 2:
                        printf("donner la nouvelle description \n");
                        scanf(" %[^\n]", tab[j].description);
                        break;
                    case 3:
                        printf("donner la nouvelle priorite \n");
                        scanf(" %[^\n]", tab[j].priorite);
                        break;
                    case 4:
                        printf("donner la date \n");
                        scanf("%d %d %d", &tab[j].datedech.day, &tab[j].datedech.month, &tab[j].datedech.year);
                        break;
                    case 5:
                        printf("au revoir \n");
                        break;
                    default:
                        printf("erreur \n ");
                        break;
                }
            }
        }
    } else {
        printf("Aucune tache avec cet ID\n");
    }

}

//methode supprimer*******************************
int supprimer()
{	
	printf("donner l'ID de la tache \n");
	scanf("%d",&t.id);
    	if(exist(t.id)==0){
	     	printf("aucune tache avec cet ID \n"); 	
    	}else{
			
		for(int j=0;j<i;j++){
			if(tab[j].id==t.id)
			{	for(int k=j;k<i-1;k++)
				{ 
				   tab[k]=tab[k+1];
				}
				i--;
			
				printf("la tache est supprimer ");
			}
		}
	}
		
	
}
//methode ordoner*************************************************************************
void ordoner(){
	
	int choix;
	
		printf("si vous voulez ordoner la tache en ordre croissant tapper 1 \n");
		printf("si vous voulez ordoner la tache en ordre décroissant tapper 2 \n");
		scanf("%d",&choix);
		        for (int j = 0; j<i; j++) {
                          for (int k = j + 1; k<i; k++) {
		switch(choix){
			case 1:
		    
                               if (tab[j].datedech.year > tab[k].datedech.year || tab[j].datedech.year == tab[k].datedech.year
							    && tab[j].datedech.month>tab[k].datedech.month || tab[j].datedech.year == tab[k].datedech.year
							    && tab[j].datedech.month == tab[k].datedech.month
							    && tab[j].datedech.day > tab[k].datedech.day)
								 {
                                                tach x = tab[j];
                                                tab[j] = tab[k];
                                                 tab[k] = x;
												 }
                
           
                 break;
            case 2:
           
                            if (tab[j].datedech.year < tab[k].datedech.year || tab[j].datedech.year == tab[k].datedech.year
							    && tab[j].datedech.month<tab[k].datedech.month || tab[j].datedech.year == tab[k].datedech.year
							    && tab[j].datedech.month == tab[k].datedech.month
							    && tab[j].datedech.day < tab[k].datedech.day)
								 {
                                                tach x = tab[j];
                                                tab[j] = tab[k];
                                                 tab[k] = x;
								 }
                
        
            break;
            default:
            	printf("ereure \n");
            	break;
            }
			
		} 
	
 }
        printf("bien ordoner \n");
          
}
// methode filtrer par date ******************************************
void filtrerpardate(tach tab[])
{
    int newyear,newmonth,newday;
		 printf("donner le jour \n");
    scanf("%d", &newday);
    printf("donner le mois \n");
    scanf("%d", &newmonth);
    printf("donner l'annee \n");
    scanf("%d", &newyear);

    for (int j = 0; j < i; j++) {
        if (tab[j].datedech.day == newday && tab[j].datedech.month == newmonth && tab[j].datedech.year == newyear) {
            printf("les nformations sont dans la tache %d :\n", j + 1);
            printf("ID : %d\n", tab[j].id);
            printf("Description : %s\n", tab[j].description);
            printf("Priorite : %s\n", tab[j].priorite);
            printf("Datedechance : %d/%d/%d\n", tab[j].datedech.day, tab[j].datedech.month, tab[j].datedech.year);
			
		}
	
}
}
// methode pour sauvegarder dans un fichier******************************************************
void saveinfile() {
    FILE *fichier = fopen("tabtaches.txt", "w+");

    if (fichier == NULL) {
        printf("erreur lors de l'ouverture du fichier.\n");
        return;
    }

    for (int j = 0; j < i; j++) {
        fprintf(fichier, "%d\n%s\n%s\n%d %d %d\n", tab[j].id, tab[j].description, tab[j].priorite, tab[j].datedech.day, tab[j].datedech.month, tab[j].datedech.year);
    }

    fclose(fichier);
    printf("Les donnees ont ete sauvegardees dans le fichier tabtaches.txt.\n");
}
// methode pour charger depuis un fichier***************************************************************
void apploadfromfile() {
    FILE *fichier = fopen("tabtaches.txt", "r");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    while (fscanf(fichier, "%d %99[^\n] %99[^\n] %d %d %d",
                  &t.id, t.description, t.priorite, &t.datedech.day, &t.datedech.month, &t.datedech.year) == 6) {
        tab[i] = t;
        i++;
    }

    fclose(fichier);
    printf("Les donnees ont ete chargees depuis le fichier tabtaches.txt.\n");
}



void filtrerparpro()
{ 
	
}

int main()

{
	apploadfromfile();
   int choix;
    while(choix!=7){
    	
    	printf("choisissez vous votre chois \n");
    	printf("taper 1 pour ajouter une tache \n");
    	printf("tapper 2 pour Afficher la Liste des Taches \n");
    	printf("tapper 3 pour Modifier une Tache  \n");
    	printf("tapper 4 pour Supprimer  une Tache  \n");
    	printf("tapper 5 pour Ordonner les Taches \n");
    	printf("tapper 6 pour Filtrer les Taches par date \n ");
    	printf("tapper 7 pour quiter \n");
    	scanf("%d",&choix);
    	
    	switch(choix){
		
    		case 1:
    		     	ajouter();
    			break;
    		case 2:
    				afficher();
    			break;
    		case 3:
    			modifier();
		     	break;
			case 4:
				supprimer();
		     	break;	
		     case 5:
		     	ordoner();
			    break;
			case 6:
				filtrerpardate(tab);
			    break;
			case 7:
				saveinfile(); 
			      printf("au revoire ");
			    break;
			
		default:
		   printf("erreur operation invalide !!!! \n");
			}		
}

}
