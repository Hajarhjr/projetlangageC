
	#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;

    printf("donner un entier positif : ");
    scanf("%d", &n);
   
    if (n <= 1) {
        printf("%d n'est pas un nombre premier.\n", n);
  } else if (n == 2) {
        printf("%d est un nombre premier.\n", n);
    } else if (n % 2 == 0) {
        printf("%d n'est pas un nombre premier.\n", n);
    } else {
        
       bool npremier = true;
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                npremier = false;
                break;
            }
        }

        if (npremier) {
            printf("%d est un nombre premier.\n", n);
        } else {
            printf("%d n'est pas un nombre premier.\n", n);
        }
    }

    return 0;
}


