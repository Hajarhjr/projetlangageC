#include<iostream>
int main(){
	float temp ;
	printf("donner température en Celsius \n :");
	scanf("%f",&temp);
	float fahrenheit = (temp * 9 / 5) + 32;
	printf("la temperature en fahrenheit est %f \n",fahrenheit);
	return 0;
}
