#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll arr_sum=0;



void solve(ll* arr, int n, ll &ans, int idx,vector<ll> &v){

    if(idx==n){
        if(v.size()==0 || v.size()==n){
            return;
        }
        ll sm=0;
        for(int i=0; i<v.size(); i++){
            //cout<<v[i]<<" ";
            sm+=v[i];
        }
       // cout<<endl;
        ll temp=abs((arr_sum-sm)-sm);
        if(ans>=temp){
            ans=temp;
            //cout<<sm<<endl<<"main yha hu jnab";
        }
        return;
    }
    
    v.push_back(arr[idx]);
    solve(arr,n,ans,idx+1,v);
    v.pop_back();
    solve(arr,n,ans,idx+1,v);
}

int main(){
    int n;
    cin>>n;
    ll* arr=new ll[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
       // cout<<arr[i]<<" ";
        arr_sum+=arr[i];
    }
    if(n==1){
        cout<<arr[0]<<endl;
        return 0;
    }
    //cout<<endl;
    //cout<<arr_sum<<endl;
    ll ans=INT_MAX;
    vector<ll> v;
    solve(arr,n,ans,0,v);
    cout<<ans<<endl;
    delete []arr;
    
    return 0;
}