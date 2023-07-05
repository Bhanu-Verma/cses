#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<ll> v;
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    stack<int> s;
    s.push(-1);

    for(int i=0; i<n; i++){
        if(s.size()!=1){
            if(arr[s.top()]<arr[i]){
                v.push_back(s.top()+1);
                s.push(i);
            }else{
                while(s.size()!=1 && arr[s.top()]>=arr[i]){
                    s.pop();
                }
                v.push_back(s.top()+1);
                s.push(i);
            }
        }else{
            v.push_back(s.top()+1);
            s.push(i);
        }
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}