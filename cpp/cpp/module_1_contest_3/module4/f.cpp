#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n,l,r;
    cin>>n>>l>>r;

    int temp;
    while(n--){
        cin>>temp;
        if(temp<l){
            cout<<l<<" ";
        }
        else if(temp>r){
            cout<<r<<" ";
        }
        else{
            cout<<temp<<" ";
        }
    }


    





   


    return 0;
}