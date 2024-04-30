#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;


        int up_count=0;


        for(char c:s)
        {
            if(c== 'U')
            {
                up_count++;
            }
        }

        if(up_count % 2 == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

        
    }

    return 0;
}