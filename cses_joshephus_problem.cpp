#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    int n,k;
    cin>>n>>k;
    int i=1; 
    queue<int> q;
    while(i<=n){
        q.push(i);
        i++;
    }
    //print(q);
    while(!q.empty()){

        int j=1;
        while(j<=k){
            int temp=q.front();
            q.pop();
            q.push(temp);
            j++;
        }
        //print(q);
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}