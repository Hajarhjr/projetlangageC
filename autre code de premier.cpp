#include<stdio.h>


bool divedeby(int n, int a)
{
    int div = a / n;

    if (n % a == 0)
    {
        printf("La division de %d par %d est: %d\n", n, a, div);
    }
    else
    {
        printf("On ne peut pas tester si le résultat de la division est premier.\n");
        return false;
    }

    bool npremier = true;

    // Correction ici
    if (div <= 1)
    {
        npremier = false;
    }
    else
    {
        for (int i = 2; i <= div / 2; i++)
        {
            if (div % i == 0)
            {
                npremier = false;
                break;
            }
        }
    }

    if (npremier)
    {
        printf("%d est premier.\n", div);
    }
    else
    {
        printf("%d n'est pas premier.\n", div);
    }

    return npremier;
}
int main()
{
		int n,a,div;
	printf("donner 2 nombre  (les deux nombres doit etre un entier)\n ");
	scanf("%d %d",&n,&a);
	divedeby(n,a);
}
