#include <stdio.h>
int main()
{
    int days,hour,min,second,Edays,Ehour,Emin,Esecond;

     scanf("Dia %d",&days);
     scanf("%d : %d : %d\n",&hour,&min,&second);
     scanf("Dia %d",&Edays);
     scanf("%d : %d : %d",&Ehour,&Emin,&Esecond);


    int t_days,t_min,t_hour,t_second;

    t_days=Edays-days;
    t_hour=Ehour-hour;
    t_min=Emin-min;
    t_second=Esecond-second;

    if(t_second<0)
    {
        t_second+=60;
        t_min--;
    }
    if(t_min<0)
    {
        t_min+=60;
        t_hour--;
    }

    if(t_hour<0)
    {
        t_hour+=24;
        t_days--;
    }


    printf("%d dia(s)\n", t_days);
    printf("%d hora(s)\n", t_hour);
    printf("%d minuto(s)\n", t_min);
    printf("%d segundo(s)\n", t_second);

}