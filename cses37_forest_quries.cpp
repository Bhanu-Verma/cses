#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n,q;
    cin>>n>>q;
    int arr[n][n];
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        for(int j=0;j<str.length();j++){
            char c;
            c=str[j];
            if(c=='.'){
                arr[i][j]=0;
            }else{
                arr[i][j]=1;
            }
        }
    }

    for(int i=1; i<n; i++){
        arr[0][i]+=arr[0][i-1];
    }

    for(int i=1; i<n; i++){
        arr[i][0]+=arr[i-1][0];
    }


    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            arr[i][j] = arr[i-1][j]+arr[i][j-1]+arr[i][j]-arr[i-1][j-1];
        }
        
    }

    /*for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==1 && y1==1){
            cout<<arr[x2-1][y2-1]<<endl;
            
        }else if(y1==1){
            cout<<arr[x2-1][y2-1]-arr[x1-2][y2-1]<<endl;
        }else if(x1==1){
            
            cout<<arr[x2-1][y2-1]-arr[x2-1][y1-2]<<endl;
        }
        else{
        cout<<arr[x2-1][y2-1]-arr[x2-1][y1-2]-arr[x1-2][y2-1]+arr[x1-2][y1-2]<<endl;
        }
    }
    return 0;
}