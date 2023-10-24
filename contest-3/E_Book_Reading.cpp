#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        ll a[11];
        for(int i = 1; i <= 10; i++)
            a[i] = (m * i) % 10;

        ll temp = n / m;
        ll q = temp / 10;
        ll r = temp % 10;

        ll sum = 0;
        for(int i = 1; i <= 10; i++)
            sum += a[i];

        sum *= q;
        for(int i = 1; i <= r; i++)
            sum += a[i];

        cout<<sum<<endl;
    }

    return 0;
}