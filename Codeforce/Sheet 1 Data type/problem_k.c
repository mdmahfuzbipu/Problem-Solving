#include <stdio.h>
int main(){
    int A[3];
    int min,max;
    for(int i =0;i<3;i++){
        scanf("%d",&A[i]);
    }

    min=A[0],max=A[2];

    for(int i=0;i<3;i++)
    {
        if(A[i]<min){
            min=A[i];
        }

        if(A[i]>max){
            max=A[i];
        }
    }

    printf("%d %d\n",min,max);

}