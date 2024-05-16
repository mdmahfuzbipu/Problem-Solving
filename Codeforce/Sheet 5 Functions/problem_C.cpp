#include <bits/stdc++.h>


using namespace std;

bool isPalindrome(string str)
{
   int left=0;
   int right=str.length()-1;

    while(left<right)
    {
        if(str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

bool isWonderful(int n)
{
    if(n%2 == 0)
    {
        return false;
    }

    string binary="";

    while(n!= 0)
    {
        binary=to_string(n%2) + binary;

        n/=2;
    }

    return isPalindrome(binary);

}

int main()
{
    int n;

    cin>>n;

    if(isWonderful(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}