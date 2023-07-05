#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> brr;
pair<int,int> solve(ll arr[], ll sum, int s, int e){
    while(s<e){
        if(arr[s]+arr[e]==sum){
            
            pair<int,int> ans=make_pair(arr[s],arr[e]);
            return ans;
        }else if(arr[s]+arr[e]<sum){
            s++;
        }else if(arr[s]+arr[e]>sum){
            e--;
        }
    }
    return {-1,-1};
}

int main(){
    map<ll,vector<int>> mp;
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]].push_back(i+1);
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        pair<int,int> p=solve(arr,x-arr[i],i+1,n-1);
        if(p.first==-1){
            continue;
        }else{
            vector<int> v1,v2,v3;
            v1=mp[arr[i]];
            cout<<v1[v1.size()-1]<<" ";
            mp[arr[i]].pop_back();
            v2=mp[p.first];
            cout<<v2[v2.size()-1]<<" ";
            mp[p.first].pop_back();
            v3=mp[p.second];
            cout<<v3[v3.size()-1]<<endl;

            return 0;
        }
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}