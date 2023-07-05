#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    int c=0,ans=0;
    sort(a,a+n);
    sort(b,b+n);
    int i=0, j=0;
    while(i<n && j<n){
        if(a[i]<b[j]){
            i++;
            c++;
            ans=max(ans,c);
        }else{
            j++;
            c--;
            ans=max(ans,c);
        }
    }

    if(j==n){
        cout<<ans+n-i<<endl;
    }
    cout<<ans<<endl;
    return 0;
}