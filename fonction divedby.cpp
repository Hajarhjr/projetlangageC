#include<stdio.h>
#include <stdbool.h>
int a,n;
 int div=n/a;
bool isvalide(int a)
{
       while(div<=1){
		if(div==1){
			printf(" %d  est pas premier!!! \n",div);
		}else{
		
		printf("entrer des nombre valide: \n");
		scanf("%d",&div);}
	}
}
 bool divedeby(int n,int a)
{    if(n%a==0){
    	div=a/n;
		printf("la division de %d a %d est: %d\n",n,a,div);
	}else {
		printf("en peux pas tester si la resultat de  division est premier ");
		return 0;
	}
	bool npremier=true;
	for(int i=2;i<=div/2;i++)
	{
		if(div%i==0)
		npremier=false;
    	 	break;
	}
	
	if(npremier==true)
	printf(" %d est premier \n ",div);
	else
	printf("%d est pas premier \n",div);
		
		return div;
	return npremier;
}

int main()
{
	int n,a,div;
	printf("donner 2 nombre  (les deux nombres doit etre un entier)\n ");
	scanf("%d %d",&n,&a);
	isvalide(a);
	divedeby(n,a);
}
