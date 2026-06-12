#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--)
    {

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mx= *max_element(arr,arr+n);
        int mn= *min_element(arr,arr+n);

        cout<<((mx+1)-mn)<<endl;



    }
    

    return 0;
}