#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
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
          if(a[i]>b[i])
            {
                int minNum=min(a[i],b[i]);
                a.insert(a.begin()+i,minNum);
                a.pop_back();
                problem++;
            }
    }

    cout<<problem<<endl;

    }
       
}