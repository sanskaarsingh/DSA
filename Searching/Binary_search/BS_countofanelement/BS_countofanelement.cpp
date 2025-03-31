#include <bits/stdc++.h>
using namespace std;

int firstocc (vector <int> &arr, int key)
{
    int n, start, end, mid, result = -1;
    start = 0; end = arr.size();
    while (start<=end)
        {
            mid = start + (end-start)/2;
            if (arr[mid]==key)
            {
                result = mid;
                end = mid - 1;
            }
            else if (arr[mid]<key)
            {
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;
            }
        }
        return result;
}

int lastocc (vector <int> &arr, int key)
{
    int n, start, end, mid, result = -1;
    start = 0; end = arr.size();
    while (start<=end)
        {
            mid = start + (end-start)/2;
            if (arr[mid]==key)
            {
                result = mid;
                start = mid + 1;
            }
            else if (arr[mid]<key)
            {
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;
            }
        }
        return result;
}

int main()
{
    int x, key, first, last, count; string temp; vector <int> arr;
    cout << "Enter the elements of the array, enter 'done' at last: " << endl;
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
            if (temp=="done")
            {
                cout << endl;
                break;
            }
            else
            {
                cout << "Invalid Input! Enter an integer or enter 'done' to go to the next step: " << endl;
            }
        }
    }
    if (arr.empty())
    {
        cout << "No Valid Input Found" << endl;
        cout << "Press Enter to exit" << endl;
        cin.get();
    }
    cout << "Enter the Element to count how many times it exists in the array: " << endl;
    cout << endl;
    while (!(cin>>key))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Input! Enter again" << endl;
    }
    first = firstocc(arr, key);
    last = lastocc (arr, key);
    count = (last - first) + 1;
    cout << "That number is present in the array " << count << " times" << endl;
    cout << endl;
    cout << "It's first position is: " << first + 1 << " and last position is: " << last + 1 << endl;
    cout << endl;
    cout << "Press Enter to Exit";
    cin.get();
    cin.get();
}
