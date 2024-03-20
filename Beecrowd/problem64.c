#include <stdio.h>

int main() {
    double num[6]={};
    double sum=0,avg;
    int count=0;
    for(int i = 0; i<6;i++){
        scanf("%lf",&num[i]);
        if(num[i]>0){
            count++;
            sum=sum+num[i];

        }
    }
    avg=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);


    return 0;
}
