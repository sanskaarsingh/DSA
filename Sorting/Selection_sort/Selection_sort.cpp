#include <bits/stdc++.h>
using namespace std;

void selectionsorta (vector<int> &arr)
{
    int n = arr.size();
    int i, j, temp;
    for (i=0; i<n; i++)
    {
        temp = i;
        for (j=i+1; j<n; j++)
        {
            if (arr[j]<arr[temp])
            {
                temp = j;
            }
        }
        swap(arr[i], arr[temp]);
    }
}

void selectionsortd (vector<int> &arr)
{
    int n = arr.size();
    int i, j, temp;
    for (i=0; i<n; i++)
    {
        temp = i;
        for (j=i+1; j<n; j++)
        {
            if (arr[j]>arr[temp])
            {
                temp = j;
            }
        }
        swap(arr[i], arr[temp]);
    }
}

void printarray (vector<int> &arr)
{
    int n = arr.size();
    int i;
    for (i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main ()
{
    int i, x;
    string temp;
    vector <int> arr;
    cout << "Enter the elements of the array, enter 'done' once you are done entering the elements: " << endl;
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
                cout << endl;
                break;
            }
            cout << endl;
            cout << "Invalid Input only enter integers or enter 'done' to go to the next step" << endl;
        }
    }
    if (arr.empty())
    {
        cout << "No Valid Input Registered!!!" << endl;
        cout << "Press Enter to Exit" << endl;
        cin.get();
        return 0;
    }
    cout << "Original Array" << endl;
    cout << endl;
    printarray (arr);
    cout << endl;

    selectionsorta (arr);
    cout << "Array Sorted in Ascending Order" << endl;
    cout << endl;
    printarray (arr);
    cout << endl;

    selectionsortd (arr);
    cout << "Array Sorted in Descending Order" << endl;
    cout << endl;
    printarray (arr);
    cout << endl;

    cout << "Press Enter to Exit!" << endl;
    cin.get();
    cin.get();
}