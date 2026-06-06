#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t,n;


    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n;


        if((n/2)%2!=0){

            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;

        vector <int> arr;
        int even=0,odd=0;
        int half=n/2;
       
        for(int i=1;i<=half;i++){
            arr.push_back(i*2);
            even +=i*2;
        }

        for (int i = 1; i < half; i++) {
            arr.push_back(i * 2 - 1);
            odd += (i * 2 - 1);
        }

        arr.push_back(even-odd);



        for(int a:arr){
            cout<<a<<" ";
        }
        cout<<"\n";


    }

    return 0;
}