#include<iostream>
#include<stdbool.h>
   bool typepair(int n){
   	return n%2==0;
   }
int main()
{
  int nbr;
 printf("dooner un nombre \n");
  scanf("%d",&nbr);
  if(typepair(nbr)){
  	printf(" %d ce nombre est pair \n",nbr);
  }	else
     printf(" %d ce nombre est impair \n",nbr);
     return 0;
}
