#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  //  map<int,int> mp;
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        //mp[arr[i]]++;
    }
    sort(arr,arr+n);
    ll ele;
    if(n&1){
        ele=arr[n/2];
    }else{
        ele=arr[n/2-1];
    }
    ll ans=0;
    for(int i=0; i<n; i++){
        ans+=abs(arr[i]-ele);
    }
    cout<<ans<<endl;
    return 0;
}