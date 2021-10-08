#include<bits/stdc++.h>
#include<climits>
using namespace std;

int kidan(int arr[],int n){
    int cursum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cursum+=arr[i];
        if(cursum<0){
            cursum=0;

        }
        maxsum=max(maxsum,cursum);
    }
    return maxsum;
}

int main(){
    int n;
   
    cin>>n;

     int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kidan(a,n);

    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]= -a[i];
    }
    wrapsum=totalsum + kidan(a,n);


    cout<<max(wrapsum,nonwrapsum)<<endl;


    return 0;
}