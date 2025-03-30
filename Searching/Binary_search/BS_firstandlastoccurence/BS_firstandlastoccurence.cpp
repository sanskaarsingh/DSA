#include <bits/stdc++.h>
using namespace std;

 int firstocc (vector <int> & arr, int key)
 {
    int start = 0, end = arr.size()-1, mid = 0, result = -1;
    while (start<=end)
    {
        mid = start + (end - start)/2;
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

 int lastocc (vector <int> & arr, int key)
 {
    int start = 0, end = arr.size()-1, mid = 0, result = -1;
    while (start<=end)
    {
        mid = start + (end - start)/2;
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
    vector <int> arr;
    int x, key, first, last;
    string temp;
    cout << "Enter the elements of the array (Type 'done' and enter when you are done)" << endl;
    while(true)
    {
        if (cin >> x)
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
            cout << "Invalid Input! Please enter numbers only, or type 'done' and enter to go to the next step..." << endl;
        }
    }
    if (arr.empty())
    {
        cout << "No input or no valid input registered" << endl;
        cout << "Press enter to exit" << endl;
        cin.get();
        return 0;
    }
    
    cout << "Enter the element to find its First and Last postions: " << endl;
    while (!(cin >> key))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Input! Enter integers only... Enter the next number: " << endl;
    }
    first = firstocc (arr, key);
    last = lastocc (arr, key);

    if (first == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else 
    {
        cout << "The First Occurence is at postition: " << first + 1 << endl;
        cout << "The Last Occurence is at postion: " << last + 1 << endl;
    }
    cout << "Press Enter to Exit";
    cin.get();
    cin.get();
    return 0;
 }