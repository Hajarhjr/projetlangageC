#include<iostream>
#include <math.h>
int main()
{
	int base , exposant,resultat;
	printf("doner la base \n ");
	scanf("%d",&base);
	printf("donner l'exposant \n");
	scanf("%d",&exposant);
	resultat  = pow (base, exposant);
	printf(" %d^%d = %d\n",base,exposant,resultat);
}
