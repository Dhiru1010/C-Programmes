
#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
	int n,temp;
	int a[n];
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

	return 0;



	


}

