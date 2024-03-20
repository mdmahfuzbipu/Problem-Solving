#include <stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    int arr[n];

    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);


    }

    for(int i =0;i<n;i++){

        if(arr[i]% 2 == 0 && arr[i]<0){
            printf("EVEN NEGATIVE\n");
        }
        else if(arr[i]%2 !=0 && arr[i]<0){
            printf("ODD NEGATIVE\n");
        }
        else if(arr[i]==0){
            printf("NULL\n");
        }

        else if(arr[i]%2 ==0 && arr[i]>0){
            printf("EVEN POSITIVE\n");
        }
        else if(arr[i]%2 !=0 && arr[i]>0){
            printf("ODD POSITIVE\n");
        }
    }

}
