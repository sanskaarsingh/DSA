#include <bits/stdc++.h>
using namespace std;

int nextalpha(vector<char> &arr, int key)
{
    int start = 0, end = arr.size()-1, mid, result = -1;
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if (arr[mid] == key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            result = mid;
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return result;
}

int main()
{
    vector<char> arr; string temp;
    char x, key;
    cout << "Enter the elements of the array, Enter 'done' when you are finished" << endl;
    while (true) 
    {
        cin >> temp;

        if (temp == "done") break;

        if (temp.length() == 1 && isalpha(temp[0])) 
        {
            arr.push_back(temp[0]);
        } else 
        {
            cout << "Invalid input! Enter only a single alphabet." << endl;
        }
    }
    if (arr.empty())
    {
        cout << "No valid inputs registered" << endl;
        cout << "Press ENTER to exit" << endl;
        cin.get();
        return 0;
    }
    cout << "Enter the alphabet whose next element to find" << endl;
    while (!(cin>>key) || !isalpha(key))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Only alphabets allowed" << endl;
    }
    int result = nextalpha(arr, key);
    if (result != -1) 
    {
        cout << "The next alphabet is: " << arr[result] << endl;
    } else 
    {
        cout << "No next alphabet found! Given key is the largest." << endl;
    }

    cout << "Press ENTER to exit." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}