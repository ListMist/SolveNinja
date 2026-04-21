#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define test int t;cin>>t;while(t--)

int main(){
    fast
    test{
        string s;
        cin>>s;
        int n = s.size();
        int B = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) B++;
        }
        if(B<=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
