#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n,m,k;
    cin>>n>>m>>k;
    ll a[n],b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0,count=0; 
    while(i<n && j<m){
        ll d=b[j]-a[i];

        if(d<-k){
            j++;
        }else if(d>=-k && d<=k){
            i++;
            j++;
            count++;
        }else{
            i++;
        }
    }
    cout<<count<<endl;
    return 0;
}