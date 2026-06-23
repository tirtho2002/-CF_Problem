#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){

        int size;
        cin>>size;
        string arr;
        cin>>arr;
        set <char> s;
        for(char a:arr){
            s.insert(a);
        }
        cout<<(s.size()*2)+(size-s.size())<<endl;




        
    }


    return 0;
}