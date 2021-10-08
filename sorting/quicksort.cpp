#include<bits/stdc++.h>
using namespace std;
void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}

void print(int a[],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}


int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(a[j]<a[high]){
            i++;
            swap(&a[i],&a[j]);
          
        }
        
    }
    swap(&a[i+1],&a[high]);
     
    return (i+1);
}
void quicksort(int a[],int low ,int high){
    if (high>low){
        int pi=partition(a,low,high);
       

        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    print(a,n);
    quicksort(a,0,n);
    print(a,n);
    return 0;
}