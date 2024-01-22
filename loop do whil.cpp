#include<iostream>
int main()
{   /*  int b=1;
	 int i = b;
  
  do {
    printf("%d\n", b);
   b= i++;
  }
  while (i <= 5);*/
  
  
 /* int i;

for (i = 1; i<=10; i++) {
	if(i==4)
	continue;
  printf("%d\n", i);
}*/
   

  /*int i, j;

    for (i = 1; i <= 10; i++) {
    	printf("i = %d\n",i);
    	for(j=1;j<=10;j++){
    		   if (i * j== 10) {
            printf(" j = %d\n ",j);
        }

      
		}
       
    }*/
    for (int i = 1; i <= 3; i++) { // Boucle extérieure
       for (int j = 1; j <= 3; j++) { // Boucle intérieure
          
             printf("%d \n",j);
        }
             printf("%d \n ", i);    
    }

    return 0;
      
}


