#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    for(int i = 0; i<12;i++){
        if(num%2!=0){
            printf("%d\n",num);
        }
        num++;
    }
}
