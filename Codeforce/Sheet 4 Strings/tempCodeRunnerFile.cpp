#include <iostream>
#include <string.h>
using namespace std; // namespace std;
int main()
{
    string X,Y;
    cin>>X>>Y;

    int result=X.compare(Y); //compare will return -1 if X is smaller than Y lexicographically

    //acm , acpc here a==a then c==c then m<p so Y is greater

    if(result<1)
    {
        cout<<X<<endl;
    }
    else if(result>1)
    {
        cout<<Y<<endl;
    }

    else
    {
        cout<<X<<endl;
    }
}
