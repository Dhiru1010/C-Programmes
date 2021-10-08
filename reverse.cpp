#include<bits/stdc++.h>
using namespace std;

int revers(int arr, int start , int end ){
    while(start>end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;         
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i =1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<arr;
    cout<<revers(arr,0,n)<<endl;



    return 0;
}