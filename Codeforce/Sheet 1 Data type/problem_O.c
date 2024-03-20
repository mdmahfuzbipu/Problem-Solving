#include <stdio.h>

int main() {
    int a,b;
    char X;
    scanf("%d%c%d",&a,&X,&b);
switch(X){
    case '+':
        printf("%d\n",a+b);
        break;
    case '-':
        printf("%d\n",a-b);
        break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        printf("%d\n",a/b);
        break;
    
}
    return 0;
}