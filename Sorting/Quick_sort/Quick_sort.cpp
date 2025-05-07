#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int low , int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]); // Brings the pivot in it's right position
    return j;
}

void qs(int arr[],int low,int high)
{

    int pindex;
    if(low<high)
    {
        pindex=f(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    qs(arr, 0, n-1);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}