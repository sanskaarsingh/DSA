#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

string linearsearch (int arr[], int n, int x)
{
    string store = "", no = "no";
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            store = store + ';' + to_string(i+1);
        }
    }
    if (store == "")
    {
        return no;
    }
    else
    {                                   
        return store;
    }
}
int main()
{
int n,x,num,c=0,length;
string str = "", temp = "";
int* arr = new int[499999999999999999];
cout << "Enter the elements of the array, seperated by a comma ',' (Upto 200,000 elements supported) : ";
getline(cin, str);
length = str.length();
for (int i = 0; i < length; i++)
{
    if ((!isdigit(str[i]) && str[i] != ',' && str[i] != ' '))
    {
        cout << "Invalid input, you can enter only number separated by a comma ','." << endl;
        cout << "Try Again...: " << endl;
        return 0;
    }
    else
    {
    if (str[i]!= ',' && str[i] != ' ')
    {
    temp = temp + str[i];
    }
    if (str[i] == ',')
    {
        arr[c] = stoi(temp);
        c++;
        temp = "";
    }
    if (str[i] == ' ')
    {
        continue;
    }
    }
}
arr[c] = stoi(temp);
c++;
cout<< "There is a total of " << c << " element(s) in the array." <<endl;
n = c;
cout << "Enter the element to be searched: ";
cin >> x;
string result = linearsearch(arr, n, x);

if (result == "no")
{
    cout << "Element not found";
}
else
{
    cout << "Element found at position(s) " << result.substr(1);
}
delete[] arr;
cout << "\nPress Enter to exit...";
cin.ignore();
cin.get();
return 0;
}