#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;

   while(t--){
    char arr[6],count=0;
    bool flag=false;
    for(int i=0;i<6;i++){
        cin>>arr[i];
        if(arr[i]=='W'){
            count++;
            if(count>=3){
                flag=true;
            }
        }
        else{
            count=0;
        }

    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }

    return 0;
}