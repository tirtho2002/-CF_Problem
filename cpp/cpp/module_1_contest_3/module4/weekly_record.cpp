#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin>>t;

   for(int i=0;i<t;i++){

    int temp;
    int sum=0;
    for(int i=0;i<7;i++){
        cin>>temp;
        sum +=temp;
    }
    cout<<sum<<endl;

   }


    return 0;
}