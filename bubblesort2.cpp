#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    int temp;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=1;
    
    while(x<n){
        for(int i=0;i<n-x;i++){
            if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]= temp;
            }
        }
    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }   




    return 0;
}