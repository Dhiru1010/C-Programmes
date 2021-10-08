#include <iostream>
using namespace std;

int main() {
	int n;
	int a[3];
	for(int i=0;i<3;i++){
	    cin>>a[i];
	}

    int temp;
    
    int x=1;
    
    while(x<3){
        for(int i=0;i<3-x;i++){
            if(a[i]<a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]= temp;
            }
        }
    }
     for(int i=0;i<3;i++){
        cout<<a[1]<<endl;
    }   
    
	return 0;
}
