#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<string, ll> ans;
        map<string, ll>::iterator itr;
        for (int i = 0; i < 3 * n; i++)
        {
            string S;
            ll C;
            cin >> S >> C;
            if (ans.find(S) != ans.end())
            {
                itr = ans.find(S);
                itr->second += C;
            }
            else
            {
                ans.insert(pair<string, ll>(S, C));
            }
        }
        vector<ll> result;
        for (itr = ans.begin(); itr != ans.end(); ++itr)
        {
            result.push_back(itr->second);
        }
        sort(result.begin(), result.end());
        for (auto x : result)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}