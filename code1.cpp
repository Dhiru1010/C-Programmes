#include <iostream>
using namespace std;
int rev(int k){
    int n,rev=0;
    while(k!=0){
	        int d=n%10;
	        rev = (rev*10)+d;
	        k=k/10;
	   }
	   return k;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    while(n!=rev(n)){
	             n++;
	    }
	    cout<<n<<endl;
	}  

	return 0;
}