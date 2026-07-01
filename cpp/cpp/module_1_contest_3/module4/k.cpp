#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int temp;
    for(int i=1;i<n;i++){
        temp=-1;
        if((arr[i]-arr[i-1])<=d){
            temp=arr[i];
            break;
        }
    }

    cout<<temp<<endl;
    return 0;
}