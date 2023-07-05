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
    ll* Btree = constructBtree(arr,n);
    /*for(int i=1; i<=n; i++){
        cout<<Btree[i]<<" ";
    }
    ll ans = getSum(Btree, 4);
    cout<<ans<<endl;*/
   
    while(q--){
        int c;
        cin>>c;
        if(c==1){
            ll k,u;
            cin>>k>>u;
            
            update(Btree,n,k-1,u-arr[k-1]);
            arr[k-1]=u;
            /*for(int i=1; i<=n; i++){
                cout<<Btree[i]<<" ";
            }
            cout<<endl;*/
            
        }else{
            ll a,b;
            cin>>a>>b;
            if(a==1){
                cout<<getSum(Btree,b)<<endl;
            }else{
                cout<<getSum(Btree,b)-getSum(Btree,a-1)<<endl;
            }
        }

    }
   

    return 0;
}