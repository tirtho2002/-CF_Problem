#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  int dif=s-r;

    p=p-1;
    q=q-1;
    r=r-1;
    s=s-1;

    vector<int> ans;

    for(int i=0;i<n;i++){
        if(i==p){

            for(int j=r;j<=s;j++){
                ans.push_back(arr[j]);
            }
            i=i+dif+1;
        }

         if(i==r){

            for(int j=p;j<=q;j++){
                ans.push_back(arr[j]);
            }
            i=i+dif+1;
        }
if(i<n){
                    ans.push_back(arr[i]);

}
    }


    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}