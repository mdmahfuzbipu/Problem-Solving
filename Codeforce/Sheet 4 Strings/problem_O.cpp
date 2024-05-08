#include <iostream>


using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int result[26]={0};
    
    for(int j=0;j<n;j++)    
    {
        char s;
        cin>>s;

        result[(int)s -97]++;
    }
    

    for(int i=0; i<=25; i++)
    {
        while(result[i] != 0)
        {   

            
            cout<<char(i+97);
            result[i]--;
        }
    }

}