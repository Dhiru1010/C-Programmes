#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr,n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            
            }
            display(arr,n);

        }
    }
    
    
    return 0;
    
}