#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int a,b,c;

    cin>>a>>b>>c;

    int originalA = a;
    int originalB = b;
    int originalC = c;

    if(a>c)
        swap(a,c);
    if(a>b)
        swap(a,b);
    if(b>c)
        swap(b,c);

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<endl;

    cout << originalA << endl;
    cout << originalB << endl;
    cout << originalC << endl;

}