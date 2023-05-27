#include <stdio.h>
#include  "factoriel.h"
void factoriel()
{
    int i,n,f = 1;
    printf("entrer un entier :\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f = f * i;
    }
    printf("\nle factoriel de %d est : %d\n",n,f);
}
void puissance()
{
    int n,i,m = 1,p;
    printf("entrer un entier quelconque :\n");
    scanf("%d",&n);
    printf("entrer une puissance :\n");
    scanf("%d",&p);
    for(i = 0;i<=n;i++)
    {
        m =  m * p;
    }
    printf("%d a la puissance %d donne : %d",n,p,m);
}
