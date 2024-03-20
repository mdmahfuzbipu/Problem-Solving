// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {
    
    long long int a,b,c,d;
    
    cin>>a>>b>>c>>d;
    
    if(b*log(a) > d*log(c)){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    
    return 0;
}