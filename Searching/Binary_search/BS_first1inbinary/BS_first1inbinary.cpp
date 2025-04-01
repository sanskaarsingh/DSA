#include <bits/stdc++.h>
using namespace std;

int infinite (vector<int> &arr, int key)
{
    int start = 0, end = 1;
    while (key >= arr[end])
    {
        start = end;
        end = end + 2;
    }
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; // it will work on infinite sorted binary arrays
    int key;
    int n = arr.size();
    
    cout << "The array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
  
    int result = infinite(arr, key);
    if (result!=-1)
    {
        cout << "The first 1 lies at " << result + 1 << " position" << endl;
    }
    else
    {
        cout << "No 1 found" << endl;
    }
    cout << "Press ENTER to exit" << endl;
    cin.ignore();
    cin.get();
}
