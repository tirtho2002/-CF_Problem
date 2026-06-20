#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        string arr;
        cin>>arr;
        if(arr[0]=='a'){
            cout<<"YES"<<endl;
        }
        else{
            if(arr[0]=='b'){
                if(arr[1]=='a' && arr[2]=='c'){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }

            }

            else{
                if(arr[1]=='b' && arr[2]=='a'){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }

        }

    }


    return 0;
}