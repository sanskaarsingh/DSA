#include <bits/stdc++.h>
using namespace std;

void bm1(int n) // Extraction of digits
{
    while (n>0)
    {
        cout << n%10;
        cout << endl;
        n=n/10;
    }
}
void bm2(int n) //Count Digits
{
    int cnt = 0;
    while (n>0)
    {
        cnt++;
        n=n/10;
    }
    cout << cnt;
}
void bm3(int n) //Count Digits but Faster
{
    int cnt = log10(n)+1;
    cout << cnt;
}
void bm4(int n) // Pallindrome
{
    int n1=n, rev =0;
    while (n1>0)
    {
        rev = rev*10 + (n1%10);
        n1=n1/10;
    }
    if (rev==n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
void bm5(int n) //Armstrong Numbers
{
    int n1=n, sum =0;
    while (n1>0)
    {
        sum = sum + ((n1%10)*(n1%10)*(n1%10));
        n1=n1/10;
    }
    if (sum==n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
void bm6(int n) //Print all divisors
{
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            cout << i << " ";
        }
    }
}
void bm7(int n) //Print all divisors but faster
{
    vector<int> div;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
            if((n/i)!=i)
            {
                div.push_back(n/i);
            }
        }
    }
        sort(div.begin(), div.end());
        for (auto it:div)
        {
            cout << it << " ";
        }
}
void bm8(int n) //Check Prime
{
    int cnt=0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            cnt++;
        }
    }
    if (cnt==2)
    {
        cout << "PRIME";
    }
    else
    {
        cout << "NOT PRIME";
    }
}

int main()
{
    int n;
    cin >> n;
    bm8(n);
    return 0;
}