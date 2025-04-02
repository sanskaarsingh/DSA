#include <bits/stdc++.h>
using namespace std;

pair<int, int> matrix(vector<vector<int>> &arr, int key)
{
    int mid, i, j, n, m;
    i = 0;
    n = arr.size();
    m = arr[0].size();
    j = m - 1;
    while (i<n && j>=0)
    {
        mid = arr[i][j];
        if(key<mid)
        {
            j--;
        }
        else if (key>mid)
        {
            i++;
        }
        else
        {
            return {i, j};
        }
    }
    return {-1, -1};
}

int print(vector<vector<int>> & arr)
{
    if (arr.empty())
    {
        cout << "The array is empty" << endl;
        return 0;
    }
    else
    {
        int i, j, n, m;
        n = arr.size();
        m = arr[0].size();
        for (i=0; i<n; i++)
        {
            for (j=0;j<m;j++)
            {
                int num = arr[i][j];
                cout << num << " " ;
            }
            cout<<endl;
        }   
    }
return 0;
}

int main()
{
    vector<vector<int>> arr;
    int rows, columns;
    string line;
    cout << "Enter the rows one by one, make sure each element of the array is seperated by a <space>, enter 'done' when you are done \n";
    while (true)
    {
        getline (cin, line);
        if (line == "done")
        {
            break;
        }
        stringstream ss(line);
        vector<int> row;
        int num;
        while (ss >> num)
        {
            row.push_back(num);
        }
        if (!arr.empty() && row.size() != arr[0].size())
        {
            cout << "All rows must have the same number of elements \n";
            cout << "Press ENTER to exit" << endl;
            cin.get();
            return 1;
        }
        arr.push_back(row);
    }
    cout << "Enter the element to find \n";
    int key;
    cin >> key;
    cout << "Your given array is..." << endl;
    print(arr);
    pair<int, int> result = matrix(arr, key);

    if (result.first!=-1)
    {
        cout << "The element is found at postion " << "{" << result.first << ", " << result.second << "}" << endl;
    }
    else
    {
        cout <<"The Element is not found" << endl;
    }
    cout << "Press ENTER to exit" << endl;
    cin.ignore();
    cin.get();
    return 0;
}