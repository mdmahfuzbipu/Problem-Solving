#include <stdio.h>
int main()
{
    int lower1,upper1,lower2,upper2;
    scanf("%d %d %d %d",&lower1,&upper1,&lower2,&upper2);

    int leftIntersect= (lower1>lower2)?lower1:lower2;
    int rightIntersect= (upper1>upper2)? upper2 : upper1;

    if(leftIntersect<=rightIntersect)
    {
        printf("%d %d\n",leftIntersect,rightIntersect);
    }
    else
    {
        printf("-1\n");
    }
    
}