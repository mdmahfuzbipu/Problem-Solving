#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int x;
    for(int i= 0 ;i<n;i++){
        scanf("%d",&x);
        int key=0;
        for(int j=1;j<=x;j++)
        {
            if(x%j == 0 ){
                key++;
            }

        }


        if(key == 2){
            printf("%d eh primo\n",x);
        }
        else
            printf("%d nao eh primo\n",x);
    }
}