#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[n];
        }
        int sum[33];
        for (int i=0;i<n;i++){
            x=a[i];
            int j=32;
        
        while(x>0){
            sum[j]=sum[j]+x%2;
            j--;
            x=x/2;
        } 
        }
        int c=0;
        for(int j=0;j<33;j++){
            if(sum[j]%k==0)
            c=c+sum[j]/k;
            else
            c=c+1+sum[j]/k;
        }
         
        cout<<c<<endl;
        
        
    }
	return 0;
}