#include <bits/stdc++.h>
using namespace std;

int main() {
    
    cout<<"Enter total no. equations :";
    int n; cin>>n;
    
    vector<int>a(n);
    vector<int>m(n);
    
    cout<<"Enter the values of a1,a2..";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    
    cout<<"Enter the values of m1,m2..";
    for(int i = 0; i<n; i++){
        cin>>m[i];
    }
    
    int M = 1;
    for(int i = 0; i<n; i++){
        M *= m[i];
    }
    
    vector<int>z(n);
    for(int i = 0; i<n; i++){
        z[i] = M/m[i];
    }
    
    vector<int>y(n);
    for(int i = 0; i<n; i++){
        int j = 1;
        while((z[i]*j)%m[i]!=1){
            j++;
        }
        y[i] = j;
    }
    
    int x = 0;
    for(int i = 0; i<n; i++){
        x+=a[i]*z[i]*y[i];
    }
    
    cout<<"Multipicative Inverse : "<<x%M<<endl;
    
    return 0;
}