#include<iostream>
int main(){
	int m  ;
	printf("donner un nombre ");
	scanf("%d \n",&m);
	
	switch ( m ) {
		case 1: 
		printf("lundi");
		break;
		case 2:
			printf("mardi");
			break;
			case 3:
				printf("mercredi");
				break;
				case 4:
					printf("jeudi");
					break;
					default:
						printf("no result");
		return 0;				
	}
}
