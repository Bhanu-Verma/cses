#include<bits/stdc++.h>
using namespace std;

void toh(int n,int f,int m,int l){
    if(n==0) return;
    toh(n-1,f,l,m);
    cout<<f<<" "<<l<<endl;
    toh(n-1,m,f,l);
}

int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    toh(n,1,2,3);

    return 0;
}