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
        if(i!=0)
            arr[i]-=arr[i-1];
    }
    
    while (q--)
    {
        int c;
        scanf("%d",&c);
        if(c==1){
            ll a,b,c;
            cin>>a>>b>>c;
            if(b!=n){
                arr[a-1]+=c;
                arr[b]-=c;
            }else{
                arr[a-1]+=c;
            }
        }else{
            ll k;
            cin>>k;
            
        }
    }
    

    return 0;
}