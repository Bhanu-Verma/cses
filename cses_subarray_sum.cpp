#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,x;
    cin>>n>>x;
    ll ans=0;
    ll arr[n+1];
    arr[0]=0;
    for(int i=1; i<n+1; i++){
        cin>>arr[i];
       // if(i!=0) 
            arr[i]+=arr[i-1];
    }

  /*  for(int i=0; i<n; i++){
        if(arr[i]==x){
            ans++;
        }
    } */
    sort(arr,arr+n+1);
   /* for(int i=0; i<n+1; i++){
        cout<<arr[i]<<" ";
    }*/
   // cout<<endl;
    int i=0,j=1;
    while(i<n+1 && j<n+1){
        ll diff=arr[j]-arr[i];
        if(diff==x){
            ans++;
            i++;
        }else if(diff<x){
            j++;
        }else{
            i++;
        }
    }

    cout<<ans<<endl;
    return 0;
}
