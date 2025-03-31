#include <bits/stdc++.h>
using namespace std;

int rotation (vector <int> &arr)
{
    int n = arr.size();
    int prev, next, start = 0, end = n-1, mid;
    if (arr[0] <= arr [n-1])
    {
        return 0;
    }
        while (start <= end)
    {
        mid = start + (end - start)/2;
        next = (mid + 1) % n;
        prev = (mid - 1 + n) % n;
        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
        {
            return mid;
        }
        if (arr[mid] < arr[end])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return 0;
}

int main()
{
    vector<int> arr;
    int x, result; string temp;
    cout << "Enter the elements of the array, enter 'done' at last: " << endl;
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
                cout << "Invalid input, enter 'done' to go to the next step" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    if (arr.empty())
    {
        cout << "No imput registered..." << endl;
        cout << "Press Enter to exit" << endl;
        cin.get();
        return 0;
    }
    
    result = rotation (arr);

    if (result == 0)
    {
        cout << "The Array is not rotated" << endl;
    }
    else
    {
        cout << "The Array is rotated " << result << "times..." << endl;
    }
    
    cout << "Press Enter to Exit" << endl;
    cin.ignore();
    cin.get();
    return 0;
}