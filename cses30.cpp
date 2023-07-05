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
    }
    sort(arr,arr+n);
    if(arr[0]!=1){
        cout<<1<<endl;
        return 0;
    }
    ll curr=1;
    for(int i=1; i<n; i++){
        if(arr[i]<=curr+1){
            curr+=arr[i];
        }else{
            cout<<curr+1<<endl;
            return 0;
        }
    }
    cout<<curr+1<<endl;
    return 0;
}