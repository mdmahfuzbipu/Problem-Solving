#include <iostream>
 
using namespace std;
 
unsigned long long fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
 
    unsigned long long prevPrev = 0;
    unsigned long long prev = 1;
    unsigned long long current;
 
    for (int i = 3; i <= n; i++)
    {
        current = prevPrev + prev;
        prevPrev = prev;
        prev = current;
    }
 
    return current;
}
 
int main()
{
    int n;
    cin >> n;
 
    unsigned long long fiboNumber;
 
    if (n == 1)
    {
        fiboNumber = 0;
    }
    else if (n == 2)
    {
        fiboNumber = 1;
    }
    else
    {
        fiboNumber = fibonacci(n);
    }
 
    cout << fiboNumber;
 
    return 0;
}