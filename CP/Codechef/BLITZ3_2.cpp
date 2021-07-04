#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        int N, A, B;
        cin>>N>>A>>B;
        int res;
        res = (2*(180 + N)) - (A+B);
        cout<<res<<endl;
    }

    return 0;
}