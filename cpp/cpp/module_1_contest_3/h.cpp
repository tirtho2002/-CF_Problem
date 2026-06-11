#include <iostream>
using namespace std;

int main() {
    int n,temp;

    cin>>n;
    while(n--){
        cin>>temp;
        if(temp%3==0) cout<<"YES\n"<<endl;
        else cout<<"NO\n"<<endl;
    }



    return 0;
}