#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max=0;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    //pre compute
    map <int,int> mpp; //long long for big numbers
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    int min = mpp[0];
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }
    for (int i=0;i<mpp.size();i++)
    {
        if(mpp[i]>max)
        {
            max=mpp[i];
        }
        if(mpp[i]<min)
        {
            min = mpp[i];
        }
    }
    cout << max << "," << min;
    return 0;
}