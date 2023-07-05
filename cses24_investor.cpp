#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    ll a[n], b[m];
    map<int,ll> m1;
    map<ll,ll> m2;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
        m1[i]=b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
   

    return 0;
}