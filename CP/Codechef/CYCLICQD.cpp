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
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        if(A+C == 180 || B+D == 180){
            cout<<"YES";
        } else {
            cout<<"NO";
        }
        cout<<endl;
    }

    return 0;
}