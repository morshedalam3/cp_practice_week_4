#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t=1;
    cin>>t;
    while(t--){
       long long n;
    cin>>n;
    long long sum=0;
    while(n){
        sum+=n;
        n = n/2;
    }
    cout<<sum<<endl;
    }
    return 0;
}