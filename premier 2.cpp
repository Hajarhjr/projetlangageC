	#include <stdio.h>
	#include <stdbool.h>
	int main()
	{
		 int n ;

    printf("donner un entier positif : ");
    scanf("%d", &n);
    if(n==1){
	
        printf("%d ce nombre est pas premier",n);
  } else if (n < 1) {
	
        printf("%d ce nombre non valid", n);
        
} else{
  bool npremier = true;
       for(int i=2;i<=n/2;i++)
    {
    	 if(n%i==0)
    	 {
    	 	npremier=false;
    	 	break;
		 }
	}
	 if(npremier==true)
	 printf("%d est un nombre premier",n);
	 else
	 printf("%d est pas un nombre premier",n);
	}
}
