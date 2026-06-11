#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
      
        long long n,a,b,ans;
        cin>>n>>a>>b;
        if((3*a)<b){
            cout<<(n*a)<<endl;
        }
        else{
            cout<<((n/3)*b)+min(((n%3)*a),b)<<endl;
        }
        
    }

    return 0;
}