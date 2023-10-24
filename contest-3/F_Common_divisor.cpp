#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n;
    cin>>n;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin>>(a[i]);

    ll g = a[0];
    for(int i = 1; i < n; i++)
        g = __gcd(g, a[i]);

    ll sq = sqrt(g * 1.0) + 1;
    set<ll> s;

    for(int i = 1; i <= sq; i++)
    {
        if(g % i == 0)
            s.insert(g / i), s.insert(i);
    }

    cout << s.size() << endl;

    return 0;
}