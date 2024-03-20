#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
for(int i = 0;i<n;i++)
{
    scanf("%d",&A[i]);
}


int lowest=A[0];
int index;
for(int i=0;i<n;i++)
{
    if(lowest>A[i]){
        lowest=A[i];
        index=i;
    }
}

printf("Menor valor: %d\n",lowest);
printf("Posicao: %d\n",index);

}