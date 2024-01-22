#include<stdio.h>
#include <stdlib.h>

int sum(int nbr)
{
	if(nbr<0){
	return 1;
	
		
	}else if(nbr==0){

		return 0;
		}	else
		return nbr+sum(nbr-1);
	}

int main()
{
int nbr;
printf("entrer un nombr");
scanf("%d",&nbr);
    if(sum(nbr)==1){
    		printf("le nombre est negatif ");
	}else
    
printf("la somme est %d ",sum(nbr));

	
}
