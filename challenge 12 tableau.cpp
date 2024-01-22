#include<stdio.h>
int inserer(int t[],int taille,int pos,int n)
 {
     if(pos<0||pos>taille)

	printf("position invalide");
	else{
		for(int i=taille;i>pos;i--)
	{
		t[i]=t[i-1];
	}
	   t[pos]=n;
	   taille++;
	}
	printf("la nouvelle tableau est \n");
	for(int j=0;j<taille;j++)
	{
		printf("T[%d] =%d \n ",j,t[j]);
		
	}
	

}

int main()
{ int taille ,pos,n;

printf("donner la taille de tableau \n");
scanf("%d",&taille);
int t[taille];
//remplissage
for(int i=0;i<taille;i++)
{
	printf("inserer T[%d] ",i);
	scanf("%d",&t[i]);
	
}
  printf("entrer la position l'element de tableau \n");
  scanf("%d",&pos);
  printf("entrer le nombre a inserer \n");
  scanf("%d",&n);
  inserer(t,taille,pos,n);
  
	
	
}
