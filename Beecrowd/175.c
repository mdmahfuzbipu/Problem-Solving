#include <stdio.h>
 
int main() {
 
    int N[20];
    int i,j,temp;
    for(i=0;i<20;i++){
        scanf("%d",&N[i]);
    }

    for(i=0;i<10;i++){

        temp=N[i];
        N[i]=N[19-i];
        N[19-i]=temp;
    }


    
    for(int k=0;k<20;k++){
        printf("N[%d] = %d\n",k,N[k]);
    }
    
 
    return 0;
}
