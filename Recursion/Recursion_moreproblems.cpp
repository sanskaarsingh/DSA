#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[], int n) //Reverse an array
{
    if (i>=n)
    {
        return;
    }
    else
    {
        swap(arr[i],arr[n-1]);
        reverse(i+1, arr, n-1);
    }
}
void reverse2(int i, int arr[], int n) //Reverse using 1 pointer
{
    if(i>=n/2)
    {
        return;
    }
    else
    {
        swap(arr[i],arr[n-1]);
        reverse2(i+1,arr,n-i-1);
    }
}
int pallindromecheck(int i, int arr[], int n) //Check for pallindrome
{
    if(i>n/2)
    {
        return 1;
    }
    else if(arr[i]!=arr[n-i-1])
    {
        return -1;
    }
    else
    {
        return pallindromecheck (i+1, arr, n);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ret = pallindromecheck(0, arr, n);
    if (ret==1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    /*
    for (int i=0;i<n;i++) // For Printing reverse
    {
        cout << arr[i] << " ";
    }
    */
    return 0;
}