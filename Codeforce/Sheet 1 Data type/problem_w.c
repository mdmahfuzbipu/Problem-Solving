#include <stdio.h>
int main()
{
    int A,B,C;

    char S,Q;

    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);

    int result;

    char Case=S;

    switch(Case)
    {

    case '+':
    
        if(A+B==C)
        {
            printf("Yes\n");
        } 
        else{

            printf("%d\n",A+B);
        }

        break;

    case '-':

        if(A-B==C)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%d\n",A-B);
        }
        break;

    case '*':

        if(A*B==C)
        {
            printf("Yes\n");
        }

        else
        {
            printf("%d\n",A*B);
        }
        break;
    
    }


}