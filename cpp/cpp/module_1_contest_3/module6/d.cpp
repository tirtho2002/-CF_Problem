#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string arr;
        cin >> arr;

        if(arr[0]=='a'){
            cout<<"YES"<<endl;
        }
        else{
            if(arr[0]=='b' && arr[1]=='a'){
                cout<<"YES"<<endl;

            }
            else if(arr[0]=='c' && arr[1]=='b'){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}