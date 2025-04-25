#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) //Nth Fibonacci number
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
}