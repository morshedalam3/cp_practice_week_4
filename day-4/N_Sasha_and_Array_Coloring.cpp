#include <bits/stdc++.h>
using namespace std;

/* ascii value
A=65,Z=90,a=97,z=122
*/

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n/2;i++){
        ans+=(v[n-1-i]-v[i]);
    }
    cout<<ans<<endl;
    }
    return 0;
}