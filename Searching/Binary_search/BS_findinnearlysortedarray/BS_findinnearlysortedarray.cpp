#include <bits/stdc++.h>
using namespace std;

int nearlysorted (vector<int> &arr, int key)
{
    int n = arr.size();
    int mid, start = 0, end = n-1;
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        if (end <= mid +1 && arr[mid+1] == key)
        {
            return mid + 1;
        }
        if (mid -1 >= start && arr[mid-1] == key)
        {
            return mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int x, key;
    vector<int> arr; string temp;
    cout << "Enter the elements of the array, enter 'done' at last:" << endl;
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
            if (temp == "done")
            {
                break;
            }
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid Input! Enter 'done' to move to the next step or input the rest of the elements: " << endl;
            }
        }
    }

    cout << "Enter the element to search: " << endl;

    if (arr.empty())
    {
        cout << "No valid inputs registered the array is empty" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Press ENTER to exit" << endl;
        cin.get();
    }

    while (!(cin>>key))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Input! Enter integers only" << endl;
    }

    int result = nearlysorted(arr, key);
    if (result == 0)
    {
        cout << "Element not found" <<endl;
        cin.ignore();
        cout << "Press ENTER to exit" << endl;
        cin.get();
    }
    else
    {
        cout << "The element is present in " << result + 1 << " position" << endl;
        cout << "Press ENTER to exit" << endl;
        cin.ignore();
        cin.get();
    }
}