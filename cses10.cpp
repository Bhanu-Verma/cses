#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(abs(a-b)==3){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}