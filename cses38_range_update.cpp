#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll getSum(ll* Btree, int idx){
    
    ll sum =0;
    while(idx>=1){
        sum+=Btree[idx];
        idx -= (idx) & (-idx);
    }
    return sum;
}



void update(ll* Btree, int n, int idx, ll val){
    idx+=1;
    while(idx<=n){
        Btree[idx]+=val;
        idx += idx & (-idx);
    }
}

ll* constructBtree(ll arr[], int n){
    ll* Btree = new ll[n+1];
    for(int i=0; i<n+1; i++){
        Btree[i]=0;
    }

    for(int i=0; i<n; i++){
        update(Btree,n,i,arr[i]);
    }
    return Btree;
}

int main(){
    int n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    ll diff[n];
    diff[0]=arr[0];
    for(int i=1; i<n; i++){
        diff[i]=arr[i]-arr[i-1];
    }

    ll* Btree = constructBtree(diff,n);

    while(q--){
        int c;
        cin>>c;
        if(c==1){
            int a,b;
            ll u;
            cin>>a>>b>>u;
            if(b!=n){
                diff[a-1]+=u;
                diff[b]-=u;
            }else{
                diff[a-1]+=u;
            }

            update(Btree,n,a-1,u);
            if(b!=n)
                update(Btree,n,b,-u);
        }else{
            int k;
            cin>>k;
            cout<<getSum(Btree,k)<<endl;
        }
    }

    return 0;
}