#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int n;
    ll a,coin = 0,odd = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a % 2 == 1){
            odd++;
        }
    }
    coin = min(odd,n-odd);
    cout<<coin<<endl;


    return 0;
}