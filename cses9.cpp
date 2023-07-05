#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll n,n1,i=1;
    cin>>n;
    n1=n;
    ll ans=0;
    while(n1>0){
        n1=n/pow(5,i++);
        ans+=n1;
        
    }
    cout<<ans<<endl;
    return 0;

}