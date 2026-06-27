#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> ans;
    for (int i = 0; i < N - 1; i++)
    {

        ans.push_back(A[i]);
        if (A[i] < A[i + 1])
        {
            for (int j = A[i] + 1; j < A[i + 1]; j++)
            {
                ans.push_back(j);
            }
        }
        else
        {
            for (int j = A[i] - 1; j > A[i + 1]; j--)
            {
                ans.push_back(j);
            }
        }

    }

            ans.push_back(A[N-1]);

     for (int i : ans)
        {
            cout << i << " ";
        }
        return 0;

}