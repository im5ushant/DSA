//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  
  int len = str.length();
  
  int i = 0;
  
  while(i < len/2){
      char temp;
      temp=str[i];
      str[i] = str[(len-1)-i];
      str[(len-1)-i] = temp;
      i++;
  }
  
  return str;
  
}