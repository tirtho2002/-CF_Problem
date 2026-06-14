
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
       
      int n,k,sum=0;
      cin>>n>>k;
      if(n%2==0 && k%2==0){
        for(int i=1;i<k;i++){
            if(i%2==0){
                sum +=i;
                cout<<i<<" ";
            }

        }
                    cout<<(n-sum)<<endl;


        
      }
    }


    return 0;
}