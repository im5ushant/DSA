#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int minmax(int arr[], int size){
    int min = INT_MAX;
    int max = INT_MIN;
    int minMax[2] = {min, max};
    
    for(int i = 0; i<size;i++){
        if(arr[i]<minMax[0]){
            minMax[0] = arr[i];
        }
        if(arr[i]>minMax[1]){
            minMax[1] = arr[i];
        }
    }
    
    cout<<minMax[0]<<" "<<minMax[1];
}

int main() {
    int size;
    cin>>size;
	int *arr = new int[size];
	for(int i = 0; i<size; i++){
	    cin>>arr[i];
	}
	minmax(arr, size);
	return 0;
}