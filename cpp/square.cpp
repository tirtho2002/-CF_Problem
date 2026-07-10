#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while (t--)
{
    int x,y,temp;
    int arr[8];


    for(int i=0;i<8;i++){

        cin>>arr[i];
    }


    int a=(arr[2]-arr[0])*(arr[2]-arr[0]);
    int b=(arr[3]-arr[1])*(arr[3]-arr[1]);

    if(a==0){
        cout<<b<<endl;
    }
    else{
        cout<<a<<endl;
    }



}



    return 0;
}