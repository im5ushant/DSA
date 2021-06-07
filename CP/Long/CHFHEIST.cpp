#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        
        ll D,d,P,Q;
        cin>>D>>d>>P>>Q;
        
        ll n = D/d;

        ll ans = 0;

        if(n % 2 == 0){
            ans = d*(2*P + (n-1)*Q)*(n/2);      // In this case if 'n' would've been odd (eg. 3) then n/2 would have got us incorrect result (3/2 = 1)
            ans += (D-(d*n))*(P+(n*Q));
        } else {
            ans = d*(P + ((n-1)/2)*Q)*(n);      // Here we've simplified the above equation to transfer the '/2' from (n/2) to inner (n-1), as 'n' is odd and (odd - 1 = even) and dividing even/2 will give us correct result.
            ans += (D-(d*n))*(P+(n*Q));
        }

        
        cout<<ans<<endl;
        
    }
    return 0;
}