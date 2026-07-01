#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){

        int temp,sum=0;
        int size;
        cin>>size;
        

        for(int i=0;i<size;i++){
            cin>>temp;
            sum +=temp;
        }

        long long root = sqrt(sum);

        if((root*root)==sum){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}