#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        string s;
    cin >> s;
    int ans = 0;
    int curr = 1;
    int target = s[0] - '0';
    if (target == 0)
        target = 10;
    while (curr <= 10)
    {
        if (target == curr)
        {
            ans++;
            break;
        }
        else if (target < curr)
        {
            ans++;
            curr--;
        }
        else
        {
            ans++;
            curr++;
        }
    }
    target = s[1] - '0';
    if (target == 0)
        target = 10;
    while (curr <= 10)
    {
        if (target == curr)
        {
            ans++;
            break;
        }
        else if (target < curr)
        {
            ans++;
            curr--;
        }
        else
        {
            ans++;
            curr++;
        }
    }
    target = s[2] - '0';
    if (target == 0)
        target = 10;
    while (curr <= 10)
    {
        if (target == curr)
        {
            ans++;
            break;
        }
        else if (target < curr)
        {
            ans++;
            curr--;
        }
        else
        {
            ans++;
            curr++;
        }
    }
    target = s[3] - '0';
    if (target == 0)
        target = 10;
    while (curr <= 10)
    {
        if (target == curr)
        {
            ans++;
            break;
        }
        else if (target < curr)
        {
            ans++;
            curr--;
        }
        else
        {
            ans++;
            curr++;
        }
    }

    cout << ans << endl;
    }
    return 0;
}
