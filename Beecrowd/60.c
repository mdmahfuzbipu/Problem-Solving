#include <stdio.h>

int main() {

    double arr[6];
    int count;
    for(int i =0;i<6;i++){
        scanf("%lf",&arr[i]);

        if(arr[i]>0 && arr[i]!=0)
        {
            count++;
        }
    }
    printf("%d valores postiivos\n",count);

    return 0;
}
