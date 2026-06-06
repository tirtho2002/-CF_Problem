#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int x,n,temp;
        cin>>x>>n;

        if(n%100!=0){
            temp=(n/100)+1;
        }
        else{
            temp =n/100;
        }

        if(x>temp){
            cout<<0<<endl;
        }
        else{
            cout<<(temp-x)<<endl;
        }

    }


    return 0;
}