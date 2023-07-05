#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,x;
    cin>>n>>x;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int s=0,e=n-1,ans=0;
    while(s<=e){
        if(arr[s]+arr[e]>x){
            ans++;
            e--;
        }else{
            ans++;
            s++;
            e--;
        }
    }
    cout<<ans<<endl;
    return 0;
}