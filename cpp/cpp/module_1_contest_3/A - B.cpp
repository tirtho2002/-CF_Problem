#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    long long n,k,temp;

    cin>>n>>k;
    temp= (n / (k + 1)) + (n % (k + 1));
    cout<<temp<<endl;

}

    return 0;
}