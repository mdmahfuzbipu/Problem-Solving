#include <stdio.h>
int main(){
    double I=0,J=1;

    while(I<=0){
        for(int i=0;i<3;i++){
            printf("I=%.0lf J=%.0lf\n",I,J);
            J+=1;
        }
        I+=.2;
    }
    J=1;
    double temp_J=0;


     while(I<0.9){
        J=1;
        temp_J+=.2;
        J=J+temp_J;
        for(int i=0;i<3;i++){
            printf("I=%.1lf J=%.1lf\n",I,J);
            J+=1;
        }

        I+=.2;
    }

    J=2;
    for(int i=0;i<3;i++){
    printf("I=%.0lf J=%.0lf\n",I,J);
    J+=1;
    }
    I=1.2;
    
    while(I<1.9){
        J=1.2;
        temp_J+=.2;
        J=J+temp_J;
        for(int i=0;i<3;i++){
            printf("I=%.1lf J=%.1lf\n",I,J);
            J+=1;
        }

        I+=.2;
    }

J=3;
for(int i=0;i<3;i++){
    printf("I=%.0lf J=%.0lf\n",I,J);
    J+=1;
}


}