#include <stdio.h>
#include <string.h>
#define NAME_MAX 100
int main(){

    char F1[NAME_MAX],S1[NAME_MAX],F2[NAME_MAX],S2[NAME_MAX];

    scanf("%s %s",F1,S1);
    
    scanf("%s %s",F2,S2);

    if(strcmp(S1,S2)==0){
        printf("ARE Brothers\n");
    }
    else
        printf("NOT");

}