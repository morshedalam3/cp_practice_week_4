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
        char ch;
        cin >> ch;

        string str;
        cin >> str;
        str += str;

        if (ch == 'g')
            cout << 0 << endl;
        else
        {

            int ans = INT_MIN;

            int greenidx = 0, charidx = 0;

            for (int i = 0; i < n; ++i)
            {
                if (str[i] == 'g')
                {
                    greenidx = i + 1;
                    break;
                }
            }
            int glast = 0;

            for (int i = 0; i < n; ++i)
            {
                if (str[i] == 'g')
                {
                    glast = i + 1;
                }
            }

            vector<int> char_last;
            for (int i = glast; i < n; ++i)
            {
                if (str[i] == ch)
                    char_last.push_back(i + 1);
            }

            for (int j = 0; j < n; ++j)
            {
                if (str[j] == ch)
                {
                    charidx = j + 1;
                }
            }
            bool one = true;
            for (int k = charidx; k < n; ++k)
            {
                if (str[k] == 'g')
                {
                    one = false;
                    break;
                }
            }

            vector<int> charoccur, goccur;

            for (int i = 0; i < n; ++i)
            {
                if (str[i] == ch)
                    charoccur.push_back(i + 1);
                if (str[i] == 'g')
                    goccur.push_back(i + 1);
            }

            int i = 0, j = 0;

            while (i < charoccur.size() && j < goccur.size())
            {
                if (charoccur[i] <= goccur[j])
                {
                    ans = max(ans, goccur[j] - charoccur[i]);
                    ++i;
                }
                else
                {
                    ++j;
                }
            }

            if (one)
            {
                for (int i = 0; i < char_last.size(); ++i)
                {
                    ans = max(ans, n - char_last[i] + greenidx);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}