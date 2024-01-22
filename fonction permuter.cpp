#include<stdio.h>

int Permuter(int a,int b)
{ 
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d et b=%d \n",a,b);
}

int main()
{int a,b;
  printf("donner 2 nombre\n");
  scanf("%d%d",&a,&b);
  printf("a=%d et b=%d \n",a,b);
  
	Permuter(a,b);
}

