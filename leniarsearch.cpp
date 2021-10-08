#include<bits/stdc++.h>
using namespace std;
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
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            pos+=1;
           cout<<"found the no in "<<pos<<" position "<<endl;
           break;
           }   else 
           pos+=1;
        
        }
    cout<<" not in array "<<endl;
     
    return 0;
}