#include<bits/stdc++.h>
using namespace std;

int arraysum(int a[],int n){
    if (n<0) return 0;
    return arraysum(a,n-1) + a[n];
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=arraysum(a,n-1);
    cout<<sum<<endl;
    return 0;
}