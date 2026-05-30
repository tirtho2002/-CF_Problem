#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;


while(t--){

    int n,zero=0,one=0;
    string s;
    bool flag=false;

    cin>>n>>s;

    for(char a:s){
        if(a=='0'){
            zero++;
            if(zero>=1){
                flag=true;
                break;
            }
        }
     }


    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



}

    return 0;
}