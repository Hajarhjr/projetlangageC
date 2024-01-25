#include<stdio.h>
typedef struct{
	int day;
	int month;
	int year;
}date;
typedef struct{
	char description [200];
	char priorite [200];
	date datedech;
}tach;

// method ajouter:**********
 int ajouter(){
 	tach tab[100] ,t; int i=0;
 	printf("donner les information a ajouter :description  priorite datedecheance \n");
	 scanf("%s%s%d%d%d",&t.description,&t.priorite,&t.datedech.day,&t.datedech.month,&t.datedech.year);
	 tab[i]=t;
	 i++;
	 printf("ajout bien fait \n");
 }




int main()
{   int choix;
//tach tab[100],ts;
 //date d;
    while(choix!=7){
    	
    	printf("choisissez vous votre chois \n");
    	printf("taper 1 pour ajouter une tache \n");
    	printf("tapper 2 pour Afficher la Liste des Taches \n");
    	printf("tapper 3 pour Afficher la Liste des Taches \n");
    	printf("tapper 4 pour Supprimer une Tâche  \n");
    	printf("tapper 5 pour Ordonner les Tâches \n");
    	printf("tapper 6 pour Filtrer les Tâches \n ");
    	printf("tapper 7 pour quiter \n");
    	scanf("%d",&choix);
    	
    	switch(choix){
		
    		case 1:
    			ajouter();
    			break;
    		case 2:
    			break;
    		case 3:
		     	break;
			case 4:
		     	break;	
		     case 5:
			    break;
			case 6:
			    break;
			case 7:
				  printf("au revoire ");
			     break;
		default:
		   printf("ereur operation invalid !!!! \n");
			}		
}

}
