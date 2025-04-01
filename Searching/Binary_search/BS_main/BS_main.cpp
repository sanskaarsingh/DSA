#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;
int binarysearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left)/2;
        if (arr[mid] == key)
        {
            return mid + 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
 int main ()
 {
    int arr[10], n, x;
    cout << "Enter the sorted elements of the array: " << endl;
    for (int i=0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter the element to be searched: " << endl;
    cin >> x;
    int result = binarysearch (arr, 0, length - 1, x);
    if (result == -1)
    {
        cout << "Element Not Found" << endl;
        cout << "Press Enter to Exit" << endl;
        cin.ignore();
        cin.get();
        return 0;
    }
    else
    {
        cout << "Element Found at position : " << result << endl;
        cout << "Press Enter to Exit";
        cin.ignore();
        cin.get();
        return 0;
    }
 }