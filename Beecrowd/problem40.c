#include <stdio.h>

int main() {

    double n1,n2,n3,n4,n5,avg;


    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);

    avg=(n1*2+n2*3+n3*4+n4*1)/10.0;
    printf("Media: %.1lf\n",avg);

    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }

      if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }

    if(avg>=5.0 && avg <= 6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);

        avg=(avg+n5)/2;

            if(avg>=5.0)
            {
                printf("Aluno aprovado.\n");

            }

            else if(avg<=4.9)
            {
                printf("Aluno reprovado.\n");
            }



        printf("Media final: %.1lf\n",avg);

    }









    return 0;
}
