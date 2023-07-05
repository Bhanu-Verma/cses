#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int odd=0;
    //char chr;
    map<char,int> mp;
    string str;
    cin>>str;
   // cout<<str<<endl;
    int n=str.length();
    //bool flag=true;
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }
   /* for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }*/
    for(auto it:mp){
        if(it.second%2==0){
            continue;
        }else{
            
            odd++;
        }
    }

    if(odd>=2){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    
        int s=0, e=n-1;
        for(auto it:mp){
            char chr=it.first;
            int val=it.second;
            if(val%2==0){
                while(val!=0){
                    str[s++]=it.first; 
                    val--;
                    if(val!=0){
                    str[e--]=it.first;
                    val--;
                    }
                }
            }else{
                //int val2=it.second;
                //chr=it.first;
                 int s2=(n+1)/2-2;
                 int e2=(n+1)/2;
                 
                 str[(n+1)/2-1]=chr;
                    val--;
                 while(val!=0){
                    str[s2--]=chr;
                    val--;
                    if(val!=0){
                    str[e2++]=chr;
                    val--;
                    }
                    //val-=2;
                 }
            }
           // cout<<str<<endl;

        }

       

        for(int i=0; i<n; i++){
            cout<<str[i];
        }
        cout<<endl;
    
    return 0;
}