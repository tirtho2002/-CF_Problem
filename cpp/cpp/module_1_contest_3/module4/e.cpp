#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{

    int k;
    cin >> k;

    int arr[k + 1];
    arr[0] = 0;
    set<int> ans;

    for (int i = 1; i <= k; i++)
    {
        cin >> arr[i];
    }

for(int i=1;i<=k;i++){
    if(ans.find(i) != ans.end()){

    }
    else{
        ans.insert(arr[i]);
    }
}


        cout<<k-ans.size()<<endl;


for(int i=1;i<=k;i++){
    if(ans.find(i) != ans.end()){

    }
    else{

        cout<<i<<" ";
    }
}

    return 0;
}