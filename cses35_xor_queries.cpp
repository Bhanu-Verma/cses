#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll getXor(ll* Btree, int idx){
    ll ans = 0;
    while(idx>=1){
        ans^=Btree[idx];
        idx -= (idx) & (-idx);
    }
    return ans;
}

void update(ll* Btree, int n, int idx, ll val){
    idx+=1;
    while(idx<=n){
        Btree[idx]^=val;
        idx += idx & (-idx);
    }
}

ll* constructBtree(ll* arr, int n){
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
    ll* Btree = constructBtree(arr,n);

    /*for(int i=1; i<=n; i++){
        cout<<Btree[i]<<" ";
    }
    cout<<endl;*/
    while(q--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            cout<<getXor(Btree,b)<<endl;
        }else{
            ll x=(getXor(Btree,b));
            ll y = (getXor(Btree,a-1));
            cout<<(x^y)<<endl;
        }
    }

    return 0;
}