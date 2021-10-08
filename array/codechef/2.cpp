#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,f,t,g;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
    f=a+c;
	g=b+d;
    
	if (f==180&&g==180){
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}
    }
	return 0;
}
