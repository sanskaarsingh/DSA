#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0;
    cin >> n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    //pre compute
    int hash[13]={0};
    for (i=0;i<n;i++)
    {
        hash[arr[i]] +=1;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
    return 0;
}