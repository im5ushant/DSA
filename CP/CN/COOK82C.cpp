#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    ll *arr = new ll[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);

    queue<ll> q1;
    int ptr = N - 1;
    int ctr = 0;
    for (int i = 0; i < M; i++)
    {
        int Q;
        cin >> Q;
        ll ans;
        while (ctr < Q)
        {
            if (ptr >= 0 && (q1.empty() || (arr[ptr] > q1.front())))
            {
                ans = arr[ptr];
                ptr--;
            }
            else
            {
                ans = q1.front();
                q1.pop();
            }
            q1.push(ans / 2);
            ctr++;
        }
        cout << ans << endl;
    }

    delete[] arr;
    return 0;
}