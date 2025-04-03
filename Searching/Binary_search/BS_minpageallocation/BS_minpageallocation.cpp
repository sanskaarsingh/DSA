#include <bits/stdc++.h>
using namespace std;
int counter(vector<int> &arr, int pages)
{
    int students = 1, i;
    long long pagesStu = 0;
    int s = arr.size();
    for (i=0; i<s; i++)
    {
        if (pagesStu + arr[i] <= pages)
        {
            pagesStu = pagesStu + arr[i];
        }
        else
        {
            students++;
            pagesStu = arr[i];
        }
    }
    return students;
}

int pages(vector<int> &arr, int ns)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int books = arr.size();
    if (ns>books)
    {
        return -1;
    }
    while (low<=high)
    {
        int mid = low + (high-low)/2;
        int student = counter(arr, mid);
        if (student>ns)
        {
            low = mid + 1; // agar student jada araha hai, yaani humlog ko pehla student ka capacity badhana hoga, uslye humlogon right jaa rahe mid se
        }
        else
        {
            high = mid - 1; // yaha pe apne ko zyada le lene se 1 student pe load badh ja raha, toh pehla ka capacity kam karna hoyega toh left jayege mid se
        }
    }
    return low; 
}

int main()
{
    vector<int> arr;
    int x, i, ns, nb, sum2, c=0; string temp;
    cout << "Enter the pages in the books one by one, enter 'done' when you are finished \n";
    while (true)
    {
        if (cin>>x)
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
            else
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "INVALID INPUT!! Enter again or enter 'done' to go to the next step \n";
            }
        }
    }
    
    if(arr.empty())
    {
        cout << "No input registered, press ENTER to exit" << endl;
        cin.ignore();
        cin.get();
        return 0;
    }

    cout << "Enter the number of students \n";
    cin >> ns;
    int result = pages(arr, ns);
    if(result!= -1)
    {
        cout << "The maximum number of pages that a student can be alloted will be: " << result << endl;
    }
    else
    {
        cout << "Number of students can't be more than number of books\n";
    }
    cout << "Press ENTER to eixt '\n";
    cin.ignore();
    cin.get();
    return 0;
}