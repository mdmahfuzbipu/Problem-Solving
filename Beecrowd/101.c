#include <stdio.h>

int main() {

   int m,n;
   scanf("%d%d",&m,&n);
    int temp,sum=0;

while(n>0 && m>0){
    sum=0;
    if(m>n){
    for(int i=n;i<=m;i++){

        sum=sum+i;
        printf("%d ",i);

}}
else if(n>m){
    for(int i=m;i<=n;i++){

        sum=sum+i;
        printf("%d ",i);

}
}

    printf("Sum=%d\n",sum);

    scanf("%d%d",&m,&n);

}

    return 0;
}
