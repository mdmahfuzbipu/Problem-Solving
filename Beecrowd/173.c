#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int N[1000];

    for(int i= 0;i<10;i++){
        N[i]=n;
        printf("N[%d] = %d\n",i,n);
        n=n*2;
    }

    return 0;
}
