#include <stdio.h>

int main() {

    int n;
    int amount=0;
    scanf("%d",&n);
    int cobaias=0;
    int coelhos=0;
    int ratos=0;
    int sapos=0;
    double per_coelhos,per_ratos,per_sapos;
    char type;

    for(int i =0;i<n;i++){
        scanf("%d %c",&amount,&type);

        if(type=='C'){
           coelhos+=amount;
        }
        if(type=='R'){
            ratos+=amount;
        }
         if(type=='S'){
            sapos +=amount;
        }

    }

    cobaias=sapos+ratos+coelhos;
    per_coelhos=((double)coelhos/cobaias)*100;
    per_ratos=((double)ratos/cobaias)*100;
    per_sapos=((double)sapos/cobaias)*100;


    printf("Total: %d cobaias\n",cobaias);
    printf("Total de coelhos: %d\n",coelhos);
    printf("Total de ratos: %d\n",ratos);
    printf("Total de sapos: %d\n",sapos);
    printf("Percentual de coelhos: %.2lf %%\n",per_coelhos);
    printf("Percentual de ratos: %.2lf %%\n",per_ratos);
    printf("Percentual de sapos: %.2lf %%\n",per_sapos);




    return 0;
}
