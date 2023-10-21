#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> v(n);
        vector<ll> even;
        vector<ll> odd;
        ll sum = 0;
        for (ll i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];

            if (v[i] & 1)
                odd.push_back(v[i]);
            else
                even.push_back(v[i]);
        }

        ll evcount = even.size();
        ll odcount = odd.size();
        while (q--)
        {
            ll type, val;
            cin >> type >> val;

            if (type == 0)
            {
                if (val % 2 == 0)
                {
                    sum += (evcount * val);
                }
                else
                {
                    sum += (evcount * val);
                    odcount += evcount;
                    evcount = 0;
                }
            }
            else
            {
                if (val % 2 == 0)
                {
                    sum += (odcount * val);
                }
                else
                {
                    sum += (odcount * val);
                    evcount += odcount;
                    odcount = 0;
                }
            }

            cout << sum << endl;
        }
    }
    return 0;
}