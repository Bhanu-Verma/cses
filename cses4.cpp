#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num1=1,num2=2;
    if(n==2 || n==3){
        cout<<"NO SOLUTION\n";
    }else if(n==1){
        cout<<1<<endl;    
    }else if(n==4){
        cout<<"2 4 1 3"<<endl;    
    }else{
        for(int i=1; i<=n; i++){
            if(num1<=n){
                cout<<num1<<" ";
                num1+=2;
                continue;
            }
            if(num2<=n){
                cout<<num2<<" ";
                num2+=2;
                continue;
            }
        }
        cout<<endl;
    }
}