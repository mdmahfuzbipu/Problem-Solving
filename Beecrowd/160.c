#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
    long long int pa, pb;
    double g1, g2;
    scanf("%lld %lld", &pa, &pb);
    scanf("%lf %lf", &g1, &g2);

    int years = 0;
    double g_r1, g_r2;
    pa = (double)pa;
    pb = (double)pb;
    

    while (pa <= pb)
    {

    g_r1 = (pa * g1) / 100.0;

    g_r2 = (pb * g2) / 100.0;
        pa += g_r1;
        pb += g_r2;
        years++;

        if(years>100){
            printf("Mais de 1 seculo.\n");
            break;
        }
    }

    if(years<=100){
    printf("%d anos.\n", years);
    }

    
    }
    
    return 0;

}