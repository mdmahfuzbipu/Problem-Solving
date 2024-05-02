#include <iostream>
#include <string>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,ans=0,j=0;
        cin>>n>>m;

        string a,b;
        cin>>a>>b;

        for(int i=0; i<m and j<n; i++)
        {
            if(a[j] == b[i])
            {
                ans++;
                j++;
            }
        }

        cout<<ans<<endl;

    }
}