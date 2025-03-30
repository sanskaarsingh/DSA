#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void bubblesort (int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printarray (int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i];
        cout << endl;
    }
    cout << "Here is your new sorted array..." << endl;
    cout << "Press Enter to Exit";
    cin.ignore();
    cin.get();
}

int main()
{
    int arr [10], i, n;
    cout << "Enter the elements of the array you want to sort one by one:" << endl;
    for (i=0; i<10; i++)
    {
        cin >> arr[i];
    }
    bubblesort (arr, 10);
    printarray (arr, 10);
    return 0;
}