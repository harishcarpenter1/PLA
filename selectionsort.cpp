// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

vector<int> selectionsort(vector<int>&arr, int n){
    for(int i = 0; i<n-1; i++){
        int mini = arr[i], minidx = i;
        for(int j = i+1; j<n; j++){
            if(mini<arr[j]){
                mini = arr[j];
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    return arr; 
}

int main() {
    
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    vector<int>sorted;
    sorted = selectionsort(arr,n);
    for(int i = 0; i<n; i++){
        cout<<sorted[i]<<" ";
    }

    return 0;
}