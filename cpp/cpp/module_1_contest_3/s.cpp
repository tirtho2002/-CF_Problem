#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;

  while(t--){
    int arr[3];
    int arr2[3];
    for(int i=0;i<6;i++){
        if(i<3){
            cin>>arr[i];
        }
        else{
            cin>>arr2[i-3];
        }
    }
    sort(arr,arr+3);
    sort(arr2,arr2+3);

    int sum1=0,sum2=0,temp=1;


    
   for (int a:arr){
    sum1 +=temp*a;
    temp *=10;
   }
   temp=1;
   for (int a:arr2){
    sum2 +=temp*a;
    temp *=10;
   }
    
   if(sum1>sum2){
    cout<<"Alice"<<endl;
   }
   else if(sum2>sum1){
    cout<<"Bob"<<endl;
   }
   else{
    cout<<"Tie"<<endl;
   }


  }

    return 0;
}