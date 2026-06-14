
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int temp=(a1+b1)-(a2+b2);
        if(temp<0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      
    }


    return 0;
}