#include<bits/stdc++.h>
using namespace std;
void reve(int arr[],int start,int end){
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;    
    }
}

void display(int arr[],int n){
    for (int i =1;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<n;i++){
        cout<<"enter the value:";
        cin>>arr[i];
    }

   
   display(arr,n);
   reve(arr,0,n);
    cout<<"reverse array"<<endl;
    display(arr,n);


    

    return 0;
}