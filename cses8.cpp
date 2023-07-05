#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll ans=1;
    unsigned long long M=1000000007;
    for(ll i=1; i<=n; i++){
        ans=(ans*2)%M;
    }
    cout<<ans<<endl;
    return 0;
}