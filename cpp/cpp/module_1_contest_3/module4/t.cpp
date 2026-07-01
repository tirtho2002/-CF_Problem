#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int temp;
        int counter=0;
        for(int i=0;i<size;i++){
            cin>>temp;
            if(temp%2!=0){
                counter++;
            }
        }
        cout<<counter<<endl;

    }
    return 0;
}