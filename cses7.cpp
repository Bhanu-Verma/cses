#include <bits/stdc++.h>
#define ll long long
#define sq(n) (n*n)
using namespace std;

int main(){
    ll n;
    cin>>n;

    ll ans=n*(n+1)/2;
    if(ans&1){
        cout<<"NO\n";

    }else{
       // ans/=2;
       int n1=1,n2=n;

       cout<<"YES\n";
        cout<<n/2<<endl;
        for(int i=1; i<=n/2; i++){
            if(i&1){
                cout<<n2--<<" ";
            }else{
                cout<<n1++<<" ";
            }
        }
        cout<<endl;
        cout<<n-n/2<<endl;
        for(int i=n1; i<=n2; i++){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}