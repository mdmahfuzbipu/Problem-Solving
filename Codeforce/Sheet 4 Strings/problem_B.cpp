#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    //better solution
    string S;
    getline(cin,S,'\\'); //third delimeter

    cout<<S;

//second way bad solution because of loop
/*
     int i=0;
    
    while(S[i] != '\\')
    {
        cout<<S[i];
        i++;
    }

*/
   
}