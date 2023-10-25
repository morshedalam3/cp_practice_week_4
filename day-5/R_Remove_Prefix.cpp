#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin >> t;
    while(t--){
         ll n, i, j; cin >> n;
    ll a[n];
    for(i = 0; i < n; i++) cin >> a[i];
    set < ll > s;
    bool no = false;
    for(i = n-1, j = 1; i >= 0; i--, j++){
        s.insert(a[i]);
        if(s.size() < j){
            cout << n - j + 1; 
            no = true; break;
        }
    }
    if(!no) cout << "0";
    cout << endl;
    }

}