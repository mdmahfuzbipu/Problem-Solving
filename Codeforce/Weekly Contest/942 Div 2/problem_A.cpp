#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }


    int problem=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>b[j])
            {
                a.insert(a.begin(),b[j]);
                a.pop_back();
                problem++;
            }
        }
    }

    cout<<problem<<endl;

    }

}