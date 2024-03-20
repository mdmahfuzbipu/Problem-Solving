#include <stdio.h>

int main() {

   double sal;
   double tax1,tax2,tax3;
   double total_tax=0;
   scanf("%lf",&sal);
   double tax_sal=sal-2000;

   if (sal>0.00 && sal <= 2000.00)
   {
       printf("Isento\n");
   }
   else if(tax_sal> 0 && tax_sal <=1000.00){

        total_tax=(tax_sal*8)/100;

        printf("R$ %.2lf\n",total_tax);
   }
   else if(tax_sal>1000.00 && tax_sal <=2500.00){
        tax1=tax_sal-1000;
        tax2=(1000*8)/100;//tax on previous 1000$ at 8% rate
        total_tax=((tax1*18)/100)+tax2;
        printf("R$ %.2lf\n",total_tax);
   }
    else if(tax_sal>2500.00 ){
        tax1=(1000*8)/100;//tax on the previous 1000$ at 8% rate
        tax2=(1500*18)/100;//tax on after 1500$ at 18% rate
        tax_sal=tax_sal-2500;
        tax3=(tax_sal*28)/100;
        total_tax=tax1+tax2+tax3;


        printf("R$ %.2lf\n",total_tax);
   }

    return 0;
}
