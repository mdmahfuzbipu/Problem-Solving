#include <stdio.h>
int main(){
    int I,J;
    I=1;J=7;
    int temp_J=J;


    while(I<10){
        
        
        temp_J=J; //J original value is remaining same 
        
        for(int i=1;i<=3;i++)
        {
            printf("I=%d J=%d\n",I,temp_J);
            temp_J-=1;
        }
        I+=2;
        

        J+=2;//at first loop J+=2 become 7+2=9 
        
     
    }

}