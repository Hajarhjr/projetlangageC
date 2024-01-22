#include<stdio.h>
int facto(int a){
	int i,s=a;
	for(i=1;i<a;i++){
		s*=i;
	}
	printf("le factoriel de %d est %d",a,s);
}
int main()
{int a;
	printf("donner un nombre \n");
	scanf("%d",&a);
	facto(a);
	
}
