#include <stdio.h>
 
int main() {
 
    int N[20];
    int i,j;
    for(i=0;i<20;i++){
        scanf("%d",&N[i]);
    }
    int A[20];
    i=0;
    for(j=19;j>=0;j--)
    {
        A[j]=A[i];
        i++;
    }

    for(int k=0;k<20;k++){
        printf("N[%d] = %d\n",k,A[k]);
    }
    
 
    return 0;
}
