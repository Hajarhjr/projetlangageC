#include<stdio.h>
#include <stdbool.h>
bool isvalide(int a)
{
	while(a<=1){
		if(a==1){
			printf(" %d  est pas premier!!! entrer un nombre valide: \n",a);
				scanf("%d",&a);
		}
	
	
	}
}
bool ispremier( int a){
	isvalide(a);
	bool np=true;
	for(int i=2;i<=a/2;i++)
    {
    	 if(a%i==0)
    	 {
    	 	np=false;
    	 	break;
		 }
	}
	if(np==true)
        printf("ce nombre %d est premier \n",a);
        else 
        printf("ce nombre %d est pas premier \n",a);
	return np;
}
int main()
{
	int a;
	printf("donner un nombre : \n");
	scanf("%d",&a);
	ispremier(a);
}
