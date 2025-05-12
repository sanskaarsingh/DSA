#include <bits/stdc++.h>
using namespace std;

int largestelement(vector<int> &arr, int n)
{
    int max = arr[0];
    for (int i = 1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int secondlargestelement(vector<int> &arr, int n)
{
    int max = arr[0]; int smax = -1;
    for (int i = 1; i<n; i++)
    {
        if(arr[i]>max)
        {
            smax = max;
            max = arr[i];
        }
    }
    return smax;
}
int sortedornot(vector<int> &arr, int n)
{
    for(int i=1;i<n;i++)
    {
        if (arr[i]>=arr[i-1])
        {}
        else
        {
            return -1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    //int max = largestelement(arr, n);
    //int max = secondlargestelement(arr, n);
    int max = sortedornot(arr, n);
    if(max==-1)
    {
        cout << "not sorted" << endl;
    }
    else
    {
        cout << "sorted" << endl;
    }
}