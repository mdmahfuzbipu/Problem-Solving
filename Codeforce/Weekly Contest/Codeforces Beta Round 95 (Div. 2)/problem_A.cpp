#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
    string S;
    cin>>S;
    
    int capital=0,small=0;
    int strLength= S.length() - 1;

    if((S[0] - 'a') >= 0 )
    {
        
        int i=1;
        while(strLength--)
        {
            if(S[i] <= 'a')
            {
                capital++;
            }

            if(S[i] >= 'a')
            {
                small++;
            }
            i++;


        }

    }

    if(capital && (!small))
    {
        S[0]=S[0]-32;

        for(int i = 1; i<S.length();i++)
        {
            S[i]=S[i]+32;
        }
        cout<<S<<endl;
        return 0;
    }

    bool allupper=true;

    for(char c:S)
    {
        if(!isupper(c))
        {
            allupper=false;
        }
    }

    if(allupper)
    {
        for(char& c:S)
        {
            c=tolower(c);
        }

        cout<<S<<endl;
        return 0;
    }
    else if( (S.length() == 1) && S[0]>= 'a')
    {
        S[0]=S[0]-32;
        cout<<S<<endl;
    }
    else
    {
        cout<<S<<endl;
    }


}

/* better solution

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string S;
    std::cin >> S;

    bool allUpper = true;
    bool firstLower = false;

    // Check if all letters are uppercase or all except the first one are uppercase
    for (int i = 0; i < S.length(); i++) {
        if (!std::isupper(S[i])) {
            allUpper = false;
            if (i != 0) {
                firstLower = true;
                break;
            }
        }
    }

    // Apply the Caps Lock rule if necessary
    if (allUpper || firstLower) {
        for (char& c : S) {
            if (std::isupper(c)) {
                c = std::tolower(c);
            } else {
                c = std::toupper(c);
            }
        }
    }

    std::cout << S << std::endl;

    return 0;
}

*/