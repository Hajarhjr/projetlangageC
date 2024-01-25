#include<stdio.h>
int main(){
    int N;
    int *P=N; 
    printf("entrer la valeur de N: "); 
    scanf("%d",P);
    if(*P%2==0){
        printf(" le nombre %d est paire ",*P);

    }else {
        printf(" le nombre %d est impaire ",*P); 
    }
}
//// Output the value of myAge (43)
//printf("%d\n", myAge);
//
//// Output the memory address of myAge (0x7ffe5367e044)
//printf("%p\n", &myAge);
//
//// Output the memory address of myAge with the pointer (0x7ffe5367e044)
////printf("%p\n", ptr);
