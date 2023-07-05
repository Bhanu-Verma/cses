//wrong

#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Vertex{
    public:
    int index;
    int val;
};

const int N=22222;
Vertex Stree[4*N];       //a segment treee of vertex type
int arr[N];

int query(int s, int e, int node, int num){
    if(Stree[node].val < num){
       return 0;
    }

    if(s==e){
        Stree[node].val -= num;
        return Stree[node].index;
    }

    int mid = s+(e-s)/2;
    if(Stree[2*node].val >= num){
        int idx = query(s,mid,2*node,num);
        if(Stree[2*node].val >= Stree[2*node+1].val){
            Stree[node] = Stree[2*node];
        }else{
            Stree[node] = Stree[2*node+1];
        }
        return idx;
    }else{
        int idx = query(s,mid,2*node+1,num);
        if(Stree[2*node].val >= Stree[2*node+1].val){
            Stree[node] = Stree[2*node];
        }else{
            Stree[node] = Stree[2*node+1];
        }
        return idx;
    }
}

void buildTree(int node, int s, int e){
   // cout<<"entered";
    if(s==e){
        Stree[node].val = arr[s];
        Stree[node].index = s+1;
        return;
    }

    int mid = s+(e-s)/2;
    buildTree(2*node,s,mid);
    buildTree(2*node+1,mid+1,e);
    if(Stree[2*node].val >= Stree[2*node+1].val){
        Stree[node] = Stree[2*node];
        return;
    }else{
        Stree[node] = Stree[2*node+1];
        return;
    }
}


int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int t[m];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<m; i++){
        cin>>t[i];
    }

    /*for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<m; i++){
        cout<<t[i]<<" ";
    }
    cout<<"endl";*/
    buildTree(1,0,n-1);
   /* for(int i=0; i<4*n; i++){
        cout<<Stree[i].val<<" ";
    }*/
    for(int i=0; i<m; i++){
        cout<<query(0,n-1,1,t[i])<<" ";
    }
    cout<<endl;
    return 0;
}