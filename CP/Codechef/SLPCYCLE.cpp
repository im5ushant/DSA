// --------------------------------------------------------------------WRONG ANSWER--------------------------------------------------------------------


#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll H, L;
        cin >> L >> H;
        string dayStr;
        cin>>dayStr;
        bool *day = new bool[L];
        for (int i = 0; i < L; i++)
        {
            if(dayStr[i] == '0'){
                day[i] = 0;
            } else if(dayStr[i] == '1'){
                day[i] = 1;
            }
        }
        int sleepReqd = H;
        int contSleep;
        bool flag = false;
        int i = 0;
        while (i < L)
        {
            contSleep = 0;
            if (day[i] == 0)
            {
                while (day[i] != 1 && i < L)
                {
                    contSleep++;
                    i++;
                }
                sleepReqd = 2 * (sleepReqd - contSleep);
                if (sleepReqd <= 0)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                i++;
            }
            cout<<sleepReqd<<endl;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}