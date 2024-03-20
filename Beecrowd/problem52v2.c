#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int num[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    const char* month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    while(num[n]){
        printf("%s\n",month[n-1]);
        break;
    }

}