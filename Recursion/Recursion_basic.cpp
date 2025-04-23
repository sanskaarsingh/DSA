#include <bits/stdc++.h>
using namespace std;

void f(int i,int n) //Print your name n times
{
    if (i==0)
    {
        return ;
    }
    else
    {
        f(i-1,n);
        cout << "Sanskar Singh";
        cout << endl;
    }
}
void f1(int i, int n) // Print 1 to n Lineraly
{
    if(i>n)
    {
        return;
    }
    else
    {
        cout << i;
        cout << endl;
        f1(i+1,n);
    }
}
void f2(int i, int n) //Print n to 1 linearly
{
    if(i==0)
    {
        return;
    }
    else
    {
        cout << i;
        cout << endl;
        f2(i-1,n);
    }
}
void f3(int i, int n) //Print 1 to n non linearly
{
    if (i==0)
    {
        return;
    }
    else
    {
        f3(i-1,n-1);
        cout << n;
        cout << endl;
    }
}
void f4(int i, int n) //Print n to 1 non linarly
{
    if(i>n)
    {
        return;
    }
    else
    {
        f4(i+1,n);
        cout << i;
        cout << endl;
    }
}
void f5(int i, int sum) //Sum of first n numbers
{
    if (i<1)
    {
        cout << sum;
        return;
    }
    else
    {
        f5(i-1,sum+i);
    }
}
int f6(int n) //Sum of first n numbers fucntional way
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return n + f6(n-1);
    }
}
int f7(int n)
{
    if (n==1)
    {
        return 1;
    }
    else 
    {
        return n * f7(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << f7(n);
}