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

    ll curr=arr[0], ans=arr[0];
    int i=0;
    for(int i=1; i<n; i++){
        if(curr+arr[i]>arr[i]){
            curr+=arr[i];
        }
        else if(curr+arr[i]<arr[i]){
            curr=arr[i];
        }

        ans=max(ans,curr);
    }

    cout<<ans<<endl;
    return 0;
}