#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
   // map<ll,int> mp;
   bool check=true;
    int n,x;
    cin>>n>>x;
    ll arr[n],brr[n],a1,a2;
    for(int i=0; i<n; i++){
        cin>>arr[i];
       // mp[arr[i]];
       brr[i]=arr[i];
    }
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j){
        ll sum=arr[i]+arr[j];
        if(sum==x){
            a1=arr[i];
            a2=arr[j];
            check=false;
            break;
        }
        if(sum<x){
            i++;
        }
        else if(sum>x){
            j--;
        }
    }
    if(!check){
        for(int i=0; i<n; i++){
            if(brr[i]==a1){
                cout<<i+1<<" ";
            }else if(brr[i]==a2){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }else{
         cout<<"IMPOSSIBLE\n";
    }
    return 0;
}