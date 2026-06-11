#include <iostream>
using namespace std;

int main() {
    int n,x,temp,sum=0;

    cin>>n>>x;
    while(n--){
        cin>>temp;
        if(temp<=x) sum +=temp;
    }
    cout<<sum<<endl;



    return 0;
}