#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    //we will make an array named present[N] that will tell that the element is present or not
    int present[n] = {1};      //1 means present and initially all are present
    //suppose we are asked to delete the element present at the pos idx
    //we will find its corresponding j such that sum of all present[i's s.t. i<=j] == idx
    //visualize--
    //1 2 3 4 5 6        1 1 1 1 1 1
    //delete element at idx 3
    //1 2 3 4 5 6         1 1 0 1 1 1
    //delete element at idx 4
    //1 2 3 4 5 6         1 1 0 1 0 1
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=0; j<n; j++){
        int idx;
        cin>>idx;
        int ele = 
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}