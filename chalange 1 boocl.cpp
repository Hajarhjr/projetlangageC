#include<iostream>
int main()
{
	int i,n,m;
	printf("donner un nombre:\n");
	scanf("%d",&n);
 printf("la table  de multiplication pour %d est :\n", n);
    for (int i = 1; i <= 10; i++) {
    	m=n*i;
        printf("%d * %d = %d\n", n, i, m);
        
    }
	
}
