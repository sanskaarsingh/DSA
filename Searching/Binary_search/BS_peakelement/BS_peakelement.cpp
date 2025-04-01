#include <bits/stdc++.h>
using namespace std;

int peak (vector<int> & arr)
{
    int start = 0, end = arr.size()-1, mid;
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if ((mid==0||arr[mid]>arr[mid-1])&&(mid==arr.size()-1||arr[mid]>arr[mid+1]))
        {
            return mid;
        }
        else if (arr[mid]<arr[mid+1])
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
    vector<int> arr;
    int x, key; string temp;
    cout << "Enter the array, and enter 'done' when you are done" << endl;
    while (true)
    {
        if (cin>>x)
        {
            arr.push_back(x);
        }
        else
        {
            cin.clear();
            cin >> temp;
            if (temp == "done")
            {
                break;
            }
            else
            {
                cout << "Invalid Input!!! Enter again or enter 'done' to got to the next step..." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    if(arr.empty())
    {
        cout << "No valid input registered, press ENTER to exit." << endl;
        cin.get();
        return 0;
    }

    int result = peak(arr);
    if (result!=-1)
    {
        cout << "The peak element is " << arr[result] << endl;
    }
    else
    {
        cout << endl;
        cout << "No peak element exists" << endl;
    }
    cout << "Press ENTER to exit" << endl;
    cin.ignore();
    cin.get();
    return 0;
}