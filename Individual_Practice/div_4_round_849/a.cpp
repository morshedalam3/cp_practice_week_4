#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        map<char, int> mp;
        string str = "codeforces";
        for (auto itr : str)
            ++mp[itr];

        if (mp.find(ch) != mp.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}