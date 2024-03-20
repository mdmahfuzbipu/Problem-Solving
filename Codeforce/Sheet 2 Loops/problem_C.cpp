#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int even = 0, odd = 0, pos = 0, neg = 0;

    int n;

    while (T--)
    {
        cin >> n;

        if (n % 2 == 0)
                even++;
        else
                odd++;

        if(n<0)
        {
            neg++;
        }
        else if(n>0)
            pos++;
    }


    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
}