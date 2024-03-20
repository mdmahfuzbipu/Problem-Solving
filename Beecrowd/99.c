#include <stdio.h>
#include <math.h> 
int main() {
 
   int n;
   scanf("%d",&n);
   int x,y;
   int sum=0;
    int num;
   for(int i=0;i<n;i++)
   {
       scanf("%d %d",&x,&y);


       if((x==y) || fabs(x-y)==1){
        sum=0;
        printf("%d\n",sum);
       }

       else if(x>y){
           x=x-1;
           y=y+1;
           num=y;
           sum=0;
           while(num >=y && num<=x)
           {
               if(num % 2 != 0)
               {
                   sum+=num;
               }
               num++;
           }
           
           printf("%d\n",sum);
       }
       
       
       else if(x<y){
        y=y-1;
        x=x+1;

        num=x;
        sum=0;
        while(num >=x && num<=y)
           {
               if(num % 2 != 0)
               {
                   sum+=num;
               }
               num++;
           }
           
           printf("%d\n",sum);

       }
       
       
       
   }
 
    return 0;
}


/*
solution 2

#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of test cases: ");
    scanf("%d", &N);

    while (N > 0) {
        int X, Y;
        printf("Enter two integer numbers (X and Y): ");
        scanf("%d %d", &X, &Y);

        int sum = 0;

        // Swapping X and Y if X is greater than Y
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        // Calculating the sum of odd numbers between X and Y
        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        printf("Sum of odd numbers: %d\n", sum);

        N--;
    }

    return 0;
}

*/