#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int N,Q;
    cin>>N>>Q;
    int A[N];

    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

   sort(A,A+N);



    while(Q--)
    {
        int key;
        cin>>key;
        int begin=0,end=N-1;

        
        int count=0;
        while(begin<=end)
        {
            int mid=begin+(end-begin)/2;

            if(A[mid]==key)
            {
                cout<<"found"<<endl;
                count++;
                break;
                
            }
            else if(A[mid]>key)
            {
                end=mid-1;
            }
            else if(A[mid]<key)
            {
                begin=mid+1;
            }

        }

        if(count==0)
        {
            cout<<"not found"<<endl;
        }
       

    }

    

}