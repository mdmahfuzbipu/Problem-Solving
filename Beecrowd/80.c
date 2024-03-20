#include <stdio.h>

int main() {

   int n=100;


   int arr[n];
   int max=0,position=0;

   for(int i =0;i<100;i++)
   {
        scanf("%d",&arr[i]);
            if(max<arr[i]){
            max=arr[i];
            position=i+1;
            }
    }
    printf("%d\n%d\n",max,position);

    return 0;
}
