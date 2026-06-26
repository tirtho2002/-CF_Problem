#include <iostream>
#include <set>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;

    int arr[n-k],arr2[k];

    for(int i=0;i<n-k;i++){
            cin>>arr[i];
    }
    for(int i=0;i<k;i++){
        cin>>arr2[i];
    }

    for(int a:arr2){
        cout<<a<<" ";
    }
    for(int a:arr){
        cout<<a<<" ";
    }


   


    return 0;
}