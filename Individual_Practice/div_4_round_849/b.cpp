#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int x = 0, y = 0;

        int x1 = 1, x2 = 1;
        bool ok = false;

        for (int i = 0; i < n; ++i)
        {
            if (str[i] == 'U')
                ++y;
            else if (str[i] == 'R')
                ++x;
            else if (str[i] == 'D')
                --y;
            else
                --x;

            if (x == 1 and y == 1)
                ok = true;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}