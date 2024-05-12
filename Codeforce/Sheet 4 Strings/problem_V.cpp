#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string S;
    cin>>S;

    //S.replace(S.find("EGYPT"),5," "); // arg(start index of substring, length of substr, replacement str)

    while(S.find("EGYPT") != string::npos) //npos == no position found
    {
        S.replace(S.find("EGYPT"),5," ");
    }


    cout<<S<<endl;

    /*
        If the substring is not found, the find() function returns std::string::npos, which is a constant representing an invalid position. In that case, the output would be "Substring not found!".
    
    */


}