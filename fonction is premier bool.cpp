#include<stdio.h>
#include <stdbool.h>
#include <math.h>

  bool ispremier( int a)
  { bool npremier;
 
  	 if (a <= 1) {
        printf("%d n'est pas un nombre premier.\n", a);
        npremier=false;
  } else if (a == 2) {
        printf("%d est un nombre premier.\n", a);
        npremier=true;
    } else if (a % 2 == 0) {
        printf("%d n'est pas un nombre premier.\n", a);
        npremier=false;
    } else {
        
      bool npremier = true;
        for (int i = 3; i <= sqrt(a); i += 2) {
            if (a % i == 0) {
                npremier = false;
                break;
            }
        } 
        if(npremier==true)
        printf("ce nombre %d est premier \n",a);
        else 
        printf("ce nombre %d est pas premier \n",a);

  }
  return npremier;
}
  
int main()
{ int a;
	printf("donner un nombre entier :\n ");
	scanf("%d",&a);
	ispremier(a);
	
}
