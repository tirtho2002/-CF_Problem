#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k,g,m;
    cin>>k>>g>>m;
    int glass=0,mug=0;


    while(k--){
        if(glass==g){
            glass=0;
        }
        else if(mug==0){
            mug=m;
        }
        else{
            int take=min((g-glass),mug);
            glass +=take;
            mug -=take;

        }

    }

                cout<<glass<<" "<<mug;

    

  
    

    return 0;
}