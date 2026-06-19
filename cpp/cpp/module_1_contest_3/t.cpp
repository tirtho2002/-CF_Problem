#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;

  while(t--){
   int a;
   cin>>a;
   if(a>1){
    if(a%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
   else{
    cout<<"YES"<<endl;
   }
  }
    return 0;
}