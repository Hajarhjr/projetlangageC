#include<iostream>
int estImpair(int nb)
    {
     	if(nb%2==0){
     		printf("true ce nombre est pair");
		 }else
		
		 printf("false ce nombre est impair"); 
	 }
int main()
{  int nb;
     printf("donner un nombre \n");
      scanf("%d",&nb);
	estImpair(nb);
}
