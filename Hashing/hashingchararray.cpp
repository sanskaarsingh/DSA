#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    string s;
    cin >> s;
    
    //pre compute
    int hash[26]={0}; //If only lowercase otherwise 256
    for (i=0;i<s.size();i++)
    {
        hash[s[i] - 'a']++; //hash[s[i]]++ for more than lowercases
    }
    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        //fetch
        cout << hash[c-'a'] << endl; //hash[c] for more than lowercases
    }
    return 0;
}