#include <stdio.h>
int main()
{
    int notes[6]= {100, 50, 20, 10, 5, 2};
    double coins[6]= {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    double value=0;
    scanf("%lf",&value);
    int count;
    printf("NOTAS:\n");
    for(int i = 0; i<6; i++)
    {
        count=(int)(value/notes[i]);
        printf("%d nota(s) de R$ %d.00\n",count,notes[i]);
        value-=notes[i]*count;
    }
    int intvalue=(int)(value*100);
    printf("MOEDAS:\n");
    for(int i =0; i<6; i++)
    {
        count=(intvalue)/(int)(coins[i]*100);
        printf("%d moeda(s) de R$ %.2lf\n",count,coins[i]);
        intvalue-=count*(int)(coins[i]*100);
    }


}
