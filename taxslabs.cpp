#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void solve(int n, vector<int> &h, vector< vector<int> > &ans){
    if(h.size()==n){
        ans.push_back(h);
        return;
    }

    h.push_back(0);
    solve(n,h,ans);
    h.pop_back();
    h.push_back(1);
    solve(n,h,ans);
    h.pop_back();
}

int main(){
    int n;
    cin>>n;
    vector<int> h;
    vector< vector<int> > ans;
    solve(n,h,ans);
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        for(auto i:it){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}