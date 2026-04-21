#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define test int t;cin>>t;while(t--)
#define ll long long

int main(){
    fast
    test{
        ll x,y;
        cin>>x>>y;
        ll k=y/x;
        cout<<(k>2?"YES" : "NO")<<endl;
    }
    return 0;
}  
