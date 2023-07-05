#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    str=str+'S';
    int n=str.length();

    int count=1, ans=1;
    for(int i=1; i<n; i++){
        if(str[i]==str[i-1]){
            count++;
        }else{
            ans=max(count,ans);
            count=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}