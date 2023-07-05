#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void solve(int n, int arr[], int i){
   if(i==n){
        print(arr,n);
        return;
   }

   arr[i]=0;
   solve(n,arr,i+1);
   arr[i]=1;
   solve(n,arr,i+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    solve(n,arr,0);

    return 0;
} 