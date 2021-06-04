#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void negBeginning(int *arr, int size){
    if(size == 0 || size == 1){
        return;
    }
    
    int start = 0;
    int end = size-1;
    
    while(start<end){
        if(arr[start]>=0 && arr[end]<0){
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        if(arr[start]<0){
            start++;
            continue;
        }
        if(arr[end]>=0){
            end--;
            continue;
        }
        
        
    }
}

int main() {
    int size;
    cin>>size;
	int *arr = new int[size];
	for(int i = 0; i<size; i++){
	    cin>>arr[i];
	}
	
	negBeginning(arr, size);
	
	for(int i = 0; i<size; i++){
	    cout<<arr[i]<<" ";
	}
	
	return 0;
}