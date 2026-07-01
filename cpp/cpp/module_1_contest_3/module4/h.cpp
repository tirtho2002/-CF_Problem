#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N), B;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    B = A;
    sort(B.begin(), B.end());

    vector<long long> suffix(N + 1, 0);

    for(int i=N-1;i>=0;i--){
        suffix[i]=suffix[i+1]+B[i];
    }

    
    for(int i=0;i<N;i++){
    int index=upper_bound(B.begin(),B.end(),A[i])-B.begin();
    cout<<suffix[index]<<" ";
    }



    return 0;
}