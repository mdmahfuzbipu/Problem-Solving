#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> num;

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        num[a[i]]++;
    }  

    vector<int> increasing, decreasing;

    set<int> used_decreasing;

    for(auto it: num)
    {
        if(it.second > 2)
        {
            cout << "NO" << endl;
            return;
        }

        if(it.second == 2)
        {
            increasing.push_back(it.first);
            decreasing.push_back(it.first);
            used_decreasing.insert(it.first);
        }

        else if(it.second == 1)
        {
            if(used_decreasing.count(it.first) == 0)
            {
                decreasing.push_back(it.first);
                used_decreasing.insert(it.first);
            }
           
            
        }
    }

    sort(increasing.begin(), increasing.end());
    sort(decreasing.begin(), decreasing.end(), greater<int>());

    cout << "YES" << endl;
    cout << increasing.size()<<endl;
    for (int i = 0; i < increasing.size();i++)
    {
        cout << increasing[i] << " ";
    }
    cout << endl;

    cout << decreasing.size() << endl;

    for (int i = 0; i < decreasing.size();i++)
    {
        cout << decreasing[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    
    solution();
    

    return 0;
}