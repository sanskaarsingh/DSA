#include <bits/stdc++.h>
using namespace std;

int infinite (vector<int> &arr, int key)
{
    int start = 0, end = 1;
    while (key > arr[end])
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
    vector<int> arr{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18}; // it will work on infinite arrays
    int key;
    int n = arr.size();
    
    cout << "The array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Enter the element to find" << endl;
    while (!(cin>>key))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Try again..." << endl;
    }
    int result = infinite(arr, key);
    if (result!=-1)
    {
        cout << "The element is fount at " << result + 1 << " position" << endl;
    }
    else
    {
        cout << "Element not present" << endl;
    }
    cout << "Press ENTER to exit" << endl;
    cin.ignore();
    cin.get();
    return 0;
}