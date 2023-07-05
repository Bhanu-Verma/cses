#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<bool> visited;
void solve(int n, string str,string &h, vector<string> &v, ll &ans){
    if(str.length()==n){
        ans++;
        v.push_back(str);
        return;
    }

    for(int i=0; i<n; i++){
        if(visited[i]==true){
            continue;
        }
        h.push_back(str[i]);
        visited[i]=true;
        solve(n,str,h,v,ans);
        visited[i]=false;
        h.pop_back();
       // solve(n,str,h,v,ans);
    }

}

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    string h;
    vector<string> v;
    ll ans=0;

    solve(n,str,h,v,ans);
    cout<<ans<<endl;
    for(auto it:v){
        cout<<it<<endl;
    }
    return 0;
}