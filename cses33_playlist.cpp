#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ll ans=0;
    set<int> s;
    //set<int> :: iterator itr;
    for(int i=0; i<n; i++){
        int itr=s.count(arr[i]);
        if(itr==0){
            s.insert(arr[i]);
        }else{
            ll x=s.size();
            ans=max(ans,x);
        }
    }
    cout<<ans<<endl;
    return 0;
}