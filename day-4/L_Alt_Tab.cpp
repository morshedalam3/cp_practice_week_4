#include <bits/stdc++.h>
using namespace std;
/* ascii value
A=65,Z=90,a=97,z=122
*/

int main() {

	    int n;
	    cin>>n;
	    vector<string>S(n);
	    vector<string>ans;
	    for(int i=0;i<n;i++)
	         cin>>S[i];
	     set<string>hashset;
	     
	     for(int i=n-1;i>=0;i--)
	     {
	        int len=S[i].length();
	        string suffix=S[i].substr(len-2,2);
	        if(hashset.find(S[i])==hashset.end())
	        {
	            ans.push_back(suffix);
	            hashset.insert(S[i]);
	        }
	     }
	     for(auto it:ans)
	        cout<<it;
	  
	
	return 0;
}