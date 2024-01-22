#include <stdio.h>
#include <stdbool.h>

bool isValide(int n){
     while(n<=1){
       printf("entrer un nombre valide");
    break;

}
}

bool isPremier(int n){
   int sum=0;
   isValide(n);
   scanf("%d",&n);

           for(int i=1;i<n;i++){
               if(n%i==0){
               sum++;
            }
        }
        if(sum==1)
        return true;
        else
        return false;

}
int main(){
    int n;
    printf("entrer un nombre:");
    scanf("%d",&n);
    if(isPremier(n))
    {
        printf("le nombre est premier ");
    }
    else{
        printf("le nombre n'est pas premier ");
    }
    return 0;
}


