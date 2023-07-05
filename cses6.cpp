#include <bits/stdc++.h>
#define ll long long
#define sq(n) (n*n)
using namespace std;

void solve(ll n){
    //total no. of ways to place two knights is n^2 * n^2-1
    //no. of ways in which knights can attack each other is 4(n-1)(n-2)
    cout<<sq(n)*(sq(n)-1)/2-(4*(n-1)*(n-2))<<endl; 
}

int main(){
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++){
        solve(i);
        //cout<<endl;
    }
    
    return 0;
}