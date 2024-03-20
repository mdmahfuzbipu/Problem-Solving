#include <stdio.h>

int main() {

    int x,y;
    scanf("%d%d",&x,&y);
    int sum=0;
    for(int i=y+1;i<x;i++){
        if(i%2!=0){
             sum=sum+i;
        }
    }

    printf("%d\n",sum);
    return 0;
}
