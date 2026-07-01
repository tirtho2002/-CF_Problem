#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int ar[n],arr[m];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    int temp=0;

    for(int i=0;i<m;i++){
        temp =temp+ar[arr[i]-1];
    }

    cout<<temp<<endl;

    return 0;
}