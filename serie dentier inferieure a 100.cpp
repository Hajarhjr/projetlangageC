#include <stdio.h>
int main()

{ 
          int n;
  
          int max=0;
         int somme=0;
         	printf("donner le nombre de repetition \n");
		scanf("%d",&n);
		 if(n==0){
		 
	    printf("donner un entier different de  0 \n");
	
   }else{
   
	for(int i=1;i<=n;i++)
	{    	 int v;
	  printf("donner la valeur #%d :",i);
	  scanf("%d",&v);
	 if(v <= 100 && v > 0)
		{
			somme=somme+v;
			if(v>max){
		                 	max=v;
	                 	}
		}
			
		
	}
   {	printf("le max est %d",max);
	printf("la somme est %d",somme);}
	return 0;
}
}

		
	
	 

