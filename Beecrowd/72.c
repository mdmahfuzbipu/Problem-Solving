#include <stdio.h>

int main() {

   int n;
   scanf("%d",&n);
   int in=0,out=0;

   int arr[n];

   for(int i =0;i<n;i++)
   {
       scanf("%d",&arr[i]);

       if(arr[i]>=10 && arr[i]<=20)
       {
           in++;

       }
       else
       {
           out++;
       }
   }


   printf("%d in\n%d out\n",in,out);

    return 0;
}
