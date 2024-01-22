#include<iostream>
int main()
{
		int age;
	printf("donner votre age \n");
	scanf("%d",&age);
	if(age >=6 && age<=7){
		printf("poussin \n");
	}else if(age>=8 && age<=9)
	{    printf("pupille \n");
	}else if(age>=10 &&age <=11)
	 { 
	      printf("minime\n");
	 }
       else if(age>=12){
       		printf("cadet\n");
	   }
	   else {
	   	printf("ereur");
	   }
	   	
	
    	return 0;
}
