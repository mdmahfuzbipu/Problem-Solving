#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string S;
    cin >> S;

    
    int i = 0;
    int j = S.length() - 1;

    while (j >= 0)
    {
        if (S[i] != S[j])
        {
            cout << "NO" << endl;
            return 0;
        }
        i++;
        j--;
    }

    cout << "YES" << endl;

    //another method with less runtime as it doesn't use loop

    string reversed = S;
    reverse(reversed.begin(),reversed.end());

    if(reversed==S)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}