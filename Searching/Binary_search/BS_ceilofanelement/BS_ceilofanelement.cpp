#include <bits/stdc++.h>
using namespace std;

int ceil(vector<int> &arr, int key)
{
    int start = 0, end = arr.size()-1, mid, result;
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if (arr[mid] == key)
        {
            result = mid;
        }
        if (arr[mid] > key)
        {
            result = mid;
            end = mid-1;
        }
        if (arr[mid] < key)
        {
            start = mid+1;
        }
    }
    return result;
}

int main()
{
    vector<int> arr; string temp;
    int x, key;
    cout << "Enter the elements of the array, Enter 'done' when you are finished inputting elements" << endl;
    while (true)
    {
        if (cin>>x)
        {
            arr.push_back(x);
        }
        else
        {
            cin.clear();
            cin>>temp;
            if (temp=="done")
            {
                break;
            }
            cout << "Invalid input enter only integers" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    if (arr.empty())
    {
        cout << "No valid inputs registered" << endl;
        cout << "Press ENTER to exit" << endl;
        cin.get();
        return 0;
    }
    cout << "Enter the element you have to find the ceil of" << endl;
    while (!(cin>>key))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Only Integers allowed" << endl;
    }
    int result = ceil(arr, key);
    cout << "The ceil of the following element will be " << arr[result] << endl;
    cout << "Press ENTER to exit" << endl;
    cin.ignore();
    cin.get();
    return 0;
}