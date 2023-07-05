#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool comp(pair<ll,ll> a, pair<ll,ll> b){
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}

int main(){
    int n;
    cin>>n;
    vector< pair<ll,ll> > v;
    for(int i=0; i<n; i++){
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),comp);
    vector<ll> a,b;
     for(auto it:v){
        a.push_back(it.first);
        b.push_back(it.second);
    } 
    int ans=1;
    int i=1,j=0;
    while(i<n && j<n){
        if(a[i]>=b[j]){
            ans++;
            j=i;
            i++;
        }else{
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}