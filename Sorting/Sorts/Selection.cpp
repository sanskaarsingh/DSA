#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        int min = i;
        for (int j=i;j<n-1;j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]= temp;
    }
}
void bubblesort(int arr[], int n)
{
    int didswap = 0; //optimisation variable
    for (int i=n-1;i>=0;i--)
    {
        for (int j=0;j<=i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswap=1;
                cout << "run" << endl;
            }
        }
        if (didswap==0)
        {
            break;
        }
    }
}
void insertionsort(int arr[], int n)
{
    for (int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}