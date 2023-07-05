#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    map<int,int> mp;
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    int x=INT_MIN;
    int ans=0;
    for(auto it:mp){
       // cout<<it.first<<" "<<it.second<<endl;
        if(it.second>x){
            x=it.second;
        }else{
            ans++;
            x=it.second;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}