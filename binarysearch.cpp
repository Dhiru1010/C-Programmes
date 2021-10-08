#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int pos=-1;
    while(s<e){
        int mid=s+(e-s)/2; //using new method for find the mid for the 100% accuracy or we can use the simple mid method
        if(key==arr[mid]){
            pos=mid+1;
            break;
        }
        else if (key>=arr[mid])
            s=mid+1;

        else
        
            e=mid-1;
        
    }
    if (pos==-1){
        cout<<"not found"<<endl;
    }
    else
        cout<< pos<<endl;

}



void display(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n,x,pos=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the value:";
        cin>>arr[i];
    }
    display(arr,n);
    cout<<"enter the value to search";
    cin>>x;
    binarySearch(arr,n,x);
    return 0;
}