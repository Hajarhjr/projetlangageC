#include<stdio.h>
void bonjour(char name[]){ 
	printf("bonjour %s \n",name);
	
}
int main()
{
	char name[30];
	printf("donner votre nom \n");
	scanf("%s",name);
	bonjour(name);
	return 0;
}
