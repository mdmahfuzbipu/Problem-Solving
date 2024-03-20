#include <stdio.h>

int main() {

 float salary,newsal,pmoney;
 int per;
 scanf("%f",&salary);

    if(salary<=400.00){
        pmoney=(salary*15)/100;
        newsal=salary + pmoney;
        per=15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",newsal,pmoney,per);
    }

    else  if(salary<=800.00){
        pmoney=(salary*12)/100;
        newsal=salary + pmoney;
        per=12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",newsal,pmoney,per);
    }
     else  if(salary<=1200.00){
        pmoney=(salary*10)/100;
        newsal=salary + pmoney;
        per=10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",newsal,pmoney,per);
    }
     else  if(salary<=2000.00){
        pmoney=(salary*7)/100;
        newsal=salary + pmoney;
        per=7;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",newsal,pmoney,per);
    }
     else  if(salary>2000.00){
        pmoney=(salary*4)/100;
        newsal=salary + pmoney;
        per=4;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",newsal,pmoney,per);
    }

    return 0;
}
