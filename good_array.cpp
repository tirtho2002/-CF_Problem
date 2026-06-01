#include <iostream>
using namespace std;
#include <set>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, temp;
        cin >> n;

        
        set<int> arr;

        for (int i = 0; i < n; i++)
        {

            cin >> temp;
            arr.insert(temp);
        }


        if(arr.size()>1){
            temp=(n/2);
            if(arr.size()<=temp){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
