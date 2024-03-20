// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    
    int x;
    x=0;
    
    int n;
    scanf("%d",&n);
    char Case[4];
    for(int i=0;i<n;i++){
        scanf("%s",&Case);
        if(strcmp(Case,"X++")==0 || strcmp(Case,"++X")==0)
        {
            x=x+1;
        }
        if(strcmp(Case,"X--")==0 || strcmp(Case,"--X")==0)
        {
            x=x-1;
        }
    }
    
    printf("%d\n",x);

    return 0;
}