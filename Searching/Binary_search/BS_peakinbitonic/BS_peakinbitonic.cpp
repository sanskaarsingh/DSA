#include <bits/stdc++.h>
using namespace std;

int bitonic(vector<int> &arr)
{
    int start=0, end=arr.size()-1, mid;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if (arr[mid]>arr[mid+1]&&arr[mid]<arr[mid-1])
        {
            end = mid-1;
        }
        else if (arr[mid]>arr[mid-1]&&(arr[mid]<arr[mid+1]))
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int x; string temp; 
    vector<int> arr;

    cout << "Enter the elements of the array one by one, and enter 'done' when you are finished (make sure that the array is bitonic)" << endl;
    while (true)
    {
        if(cin>>x)
        {
            arr.push_back(x);
        }
        else
        {
            cin.clear();
            cin>>temp;
            if(temp == "done")
            {
                break;
            }
            else
            {
                cout << "Invalid input enter again" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }
    if (arr.empty())
    {
        cout << "No valid input registered, press enter to exit" << endl;
        cin.ignore();
        cin.get();
        return 0;
    }

    int result = bitonic(arr);
    
    if (result!=1)
    {
        cout << "The peak element of this array is " << arr[result] << " which lies in the " << result +1 << " position" << endl;
    }
    else
    {
        cout << "No peak element found" << endl;
    }
    cout << "Press ENTER to exit" << endl;
    cin.ignore();
    cin.get();
    return 0;
}