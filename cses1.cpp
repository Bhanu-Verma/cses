#include <bits/stdc++.h>
using namespace std;

void solve(long long n){
    cout<<n<<" ";
    if(n==1){
        //cout<<"1"<<endl;
        return;
    }
    if(n%2==0) {
       // cout<<n/2<<" ";
        solve(n/2);
        }
    else{
        
       // cout<<3*n+1<<" ";
        solve(3*n+1);
    }
}

int main(){
    long long n;
    cin>>n;
    solve(n);
    
    return 0;
}