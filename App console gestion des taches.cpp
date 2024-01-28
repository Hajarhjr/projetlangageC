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
      	
 	if(exist(t.id)==1)
 	{
 	    printf("le id de cette tache est deja exist \n");
 		
	 } else{
	 
	 printf("donner les information a ajouter :  description  priorite datedecheance \n");
 	getchar();
 
 	 fgets(t.description,sizeof(t.description),stdin);
 	  fgets(t.priorite,sizeof(t.priorite),stdin);
	 scanf("%d%d%d",&t.datedech.day,&t.datedech.month,&t.datedech.year);
	 tab[i]=t;
	 
	 i++;
	 printf("ajout bien fait \n");
	 }
 }

 // method afficher*******************************************************************
 void afficher(tach tab[],int i)
{      
	for(int j=0;j<i;j++)
	{
   	printf(" les informations dans la tache %d sont: \n le ID : %d \n la description : %s \n priorite : %s \n datedechance :%d/%d/%d \n",j+1,tab[j].id,tab[j].description,tab[j].priorite,tab[j].datedech.day,tab[j].datedech.month,tab[j].datedech.year);
	}	
}

//method modiffier*******************************


//methode supprimer*******************************
int supprimer()
{	
	int id;
	printf("donner l'ID de la tache \n");
	scanf("%d",&id);
	
    	if(exist(id)==0){
	     	printf("aucune tache avec ce ID \n");
	     	
    	}else{
			
		for(int j=0;j<i;j++){
		
			if(tab[j].id==id)
			{
				for(int k=j;k<i-1;k++)
				{
					tab[k]=tab[k+1];
				}
				i--;
				printf("la tache est supprimer ");
			}
		}
	}
		
	
}


int main()

{
   int choix;
    while(choix!=7){
    	
    	printf("choisissez vous votre chois \n");
    	printf("taper 1 pour ajouter une tache \n");
    	printf("tapper 2 pour Afficher la Liste des Taches \n");
    	printf("tapper 3 pour Modifier une Tâche  \n");
    	printf("tapper 4 pour Supprimer  une Tâche  \n");
    	printf("tapper 5 pour Ordonner les Tâches \n");
    	printf("tapper 6 pour Filtrer les Tâches \n ");
    	printf("tapper 7 pour quiter \n");
    	scanf("%d",&choix);
    	
    	switch(choix){
		
    		case 1:
    		     	ajouter();
    			break;
    		case 2:
    					afficher(tab,i);
    			break;
    		case 3:
    		//	modifier();
		     	break;
			case 4:
				supprimer();
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
