#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll bagCapacity, m, arr[20][20], cntmatch = 0, cntMatchbox = 0, total = 0;

    cin >> bagCapacity >> m; // m is matchbox

    for (int i = 0; i < m;i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        cntMatchbox += arr[i][0];
        cntmatch += arr[i][0] * arr[i][1];
    }


    if(cntMatchbox <= bagCapacity)
    {
        cout << cntmatch << endl;
        return;
    }


    while(bagCapacity)
    {
        ll x = 0;

        for (ll i = 0; i < m;i++)
        {
            if(arr[x][1]< arr[i][1])
            {
                x = i;
            }
        }


        if(bagCapacity <= arr[x][0])  // suppose bagcapacity but largest matchbox is 10 
        {
            total += arr[x][1] * bagCapacity;
            cout << total << "\n";
            return;
        }

        else   // bagcapacity 7 but largest matchbox is 5 then 
        {
            total += arr[x][0] * arr[x][1];
            bagCapacity -= arr[x][0];   // remaining bagcapacity 7 - 5 = 2
            arr[x][1] = 0;  // largest matchbox is used 
        }



    }




}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
    solve();
    

    return 0;
}