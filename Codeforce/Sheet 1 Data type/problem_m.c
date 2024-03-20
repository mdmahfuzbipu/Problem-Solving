// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char a;
    scanf("%c",&a);
    
    if(a >= 48 && a<=57){
        printf("IS DIGIT\n");
    }
    else if(a>=97 && a<=122)
    {
        printf("ALPHA\nIS SMALL\n");
    }
    
    
    else if(a>=65 && a<=90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    

    return 0;
}