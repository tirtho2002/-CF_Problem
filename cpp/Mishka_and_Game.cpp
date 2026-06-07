#include <iostream>
using namespace std;

int main() {
    int x,mishka=0,chris=0;
    cin >> x;

    for(int i=0;i<x;i++){
        int a,b;
        cin>>a>>b;

        if(a!=b){
            if(a>b){
                mishka++;
            }
            else{
                chris++;
            }
        }
        else{
            mishka++;
            chris++;

        }

    }

    if(mishka>chris){
        cout<<"Mishka";
    }
    else if(chris>mishka){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}









































































































































