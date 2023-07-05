#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
const int mod = 1e9+7;

ll solve(ll a, ll b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a%mod;
    }
    ll temp = solve(a,b/2);
    if(b%2==0){
        return (temp*temp)%mod;
    }else{
        return (((temp*temp)%mod)*a)%mod;
    }
}

int main(){
    int n;
    cin>>n;
    //cout<<"n="<<n<<endl;
    for(int i=0; i<n; i++){
         ll a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
       
    
    return 0;
}