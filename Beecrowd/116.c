#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,y;
    float result;

    for(int i=0;i<n;i++)
    {
        
        scanf("%d %d",&x,&y);

        if(y==0){
            printf("divisao impossivel\n");
            
        }
        else{
        result=(float)x/y;

        printf("%.1f\n",result);
        }
    }

}