#include <stdio.h>
int main()
{
    int a,b;
    char sign;
    scanf("%d %c %d",&a,&sign,&b);


    if(sign == '>' && (a>b))
    {
        printf("Right");
    }


    
    else if(sign == '<' && (a<b))
    {
        printf("Right");
    }

    
    else if(sign == '=' && (a==b))
    {
        printf("Right");
    }

    else
        printf("Wrong");

}