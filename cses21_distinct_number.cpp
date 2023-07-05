#include <bits/stdc++.h>
using namespace std;
#define ll long long

int distinct(int arr[], int n){
    int ans=1;
    sort(arr,arr+n);
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            continue;
        }else{
            ans++;
        }
    }
    return ans;
}

int main(){
    int n; 
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //int ans=0;
    int ans=distinct(arr,n);
    cout<<ans<<endl;
    return 0;
}