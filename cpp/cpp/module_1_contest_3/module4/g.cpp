#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t >> n >> k;

    while (t--)
    {
        vector<int> arr;
        int arr_num[n];
        
        int temp=-1, temp2=-2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr_num[i];
            int j;
            if (arr_num[i] == k)
            {
               temp=i;
               for(j=i+1;j<n;j++){
                cin>>arr_num[j];
                if(arr_num[j]==k){
                    temp2=j;
                    i=j;
                    break;
                }
               }
              
            }
        }

if(temp>0 && temp2>0){
    int couter=0;
    for(int i=temp;i<=temp2;i++){
        if(arr_num)
    }
}       

        return 0;
    }

}