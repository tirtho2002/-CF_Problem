#include <iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }

    int big=arr[0];

    for(int i=0;i<t-1;i++){
        if(arr[i+1]>arr[i]){
            big=arr[i+1];
        }
        else{
            break;
        }
    }

    cout<<big<<endl;

    return 0;
}