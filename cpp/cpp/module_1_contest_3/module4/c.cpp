#include <iostream>
#include <set>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       sort(arr, arr + n);

int temp = arr[0];
int count = 1;
int reserved = -1;

for(int i = 1; i < n; i++){
    if(arr[i] == temp){
        count++;
    }
    else{
        temp = arr[i];
        count = 1;
    }

    if(count >= 3){
        reserved = temp;
        break;
    }
}

cout << reserved << endl;
        

    }


    return 0;
}