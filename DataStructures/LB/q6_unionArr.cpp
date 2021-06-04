// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int *u = new int[n+m];
        for(int i = 0; i < n+m; i++){
            u[i] = -1;
        }
        int ctr = 0;
        
        for(int i = 0 ; i<n; i++){
            int flag = 0;
            for(int j = 0; j<=ctr; j++){
                if(u[j] == a[i]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                u[ctr] = a[i];
                ctr++;
            }
        }
        
        for(int i = 0; i < m; i++){
            int flag = 0;
            for(int j = 0; j<=ctr; j++){
                if(u[j] == b[i]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                u[ctr] = b[i];
                ctr++;
            }
        }
        
        return ctr;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends