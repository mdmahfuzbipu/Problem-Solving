#include <iostream>
using namespace std;
int main()
{
    int n;
    int alcool=0,gasoline=0,diesel=0;
    while(true)
    {
        cin>>n;
        if(n==1)
            alcool++;
        else if(n==2)
            gasoline++;
        else if(n==3)
            diesel++;
        else if(n==4)
            break;
        else
            continue;
    }

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcool<<endl;
    cout<<"Gasolina: "<<gasoline<<endl;
    cout<<"Diesel: "<<diesel<<endl;


}