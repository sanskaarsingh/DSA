#include <bits/stdc++.h>
using namespace std;

int mindiff(vector<int> &arr, int key)
{
    int start = 0, end = arr.size() - 1, mid, result;
    while (start <= end)
    {
        mid = start + (end-start)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return start;
}

int main()
{
    vector<int> arr;
    int key, x; string temp;
    cout << "Enter the elements of the array enter 'done' when you are finished..." << endl;
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
                cout << "Invalid input! Enter again..." << endl;
            }
        }
    }
    cout << "Enter the element to find minimum difference of: " << endl;
    while(!(cin>>key))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Input! Integers only..." << endl;
    }
    int result = mindiff(arr, key);

    if((arr[result]- key)!=0)
    {
    if ((arr[result]-key)<(key-arr[result-1]))
       {
           cout << "The mimimun difference with the given element comes out to be " << arr[result] - key << " with the element " << arr[result] << " at the postion " << result+1 << endl;
       }
    else
       {
           cout << "The mimimun difference with the given element comes out to be " << key - arr[result-1] << " with the element " << arr[result-1] << " at the postion " << result << endl;
       }
    }
    else
    {
        cout << "The same element is present in postion " << result + 1 << " so the difference comes out to be 0";
    }
    cout << "Press ENTER to exit" << endl;
    cin.ignore();
    cin.get();
}