#include <stdio.h>
int main()
{
    long long time,days=0,months=0,years=0;
    scanf("%lld",&time);

    
    if(time>=365)
    {
    years=time/365;
    time=time%365;
    //printf("%lld years\n",years);
    }

    if(time>=30)
    {
    months=time/30;
    time=time%30;
    //printf("%lld months\n",months);
    }
    if(time>0){
    days=time;
    }
    
    printf("%lld years\n",years);
    printf("%lld months\n",months);
    printf("%lld days\n",days);
    
}