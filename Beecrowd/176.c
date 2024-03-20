#include <stdio.h>

long long int fib(int x)
{ 
    if(x<=1)
        return x;
    
    long long int prev=0;
    long long int current=1;

    for(int i=2;i<=x;i++)
    {
        long long int temp=current;
        current=prev+current;
        prev=temp;
    }

    return current;



}

int main(){
    int n;
    scanf("%d",&n);
    int a;
    long long int fibo_num;
    for(int i=0;i<n;i++){
        scanf("%d",&a);

        fibo_num=fib(a);

        printf("Fib(%d) = %lld\n",a,fibo_num);
    }
}