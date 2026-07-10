#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
string arr;
cin>>arr;
int count=0;

if(arr[0]=='y'||arr[0]=='Y'){
    count++;
}
if(arr[1]=='e'||arr[1]=='E'){
    count++;
}
if(arr[2]=='s'||arr[2]=='S'){
    count++;
}

if(count==3){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}

    return 0;
}