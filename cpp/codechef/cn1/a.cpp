#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    int temp=0;
    int t=x;
    
    for(int i=t;i>y;i--){
        if(x%10!=0){
            temp +=(x/10)+1;
            x--;
        }
        else{
        temp +=(x/10);
        x--;

        }
    }
    
    cout<<temp<<endl;
}



}
