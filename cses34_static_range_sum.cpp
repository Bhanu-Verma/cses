#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i!=0)
            arr[i]+=arr[i-1];
    }

    while(q--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            cout<<arr[b-1]<<endl;
        }else{
            cout<<arr[b-1]-arr[a-2]<<endl;
        }
    }
    return 0;
}