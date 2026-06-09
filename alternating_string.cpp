#include<iostream>
#include<algorithm>
using namespace std;

int main()
{


    int t;
    cin>>t;
    while(t--){
        int c=0;
        string arr;
        cin>>arr;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                c++;
            }
        }
        if(c>2){
            cout<<"NO"<<endl;

        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}