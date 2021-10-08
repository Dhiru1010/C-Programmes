#include<bits/stdc++.h>
using namespace std;
bool isPrime( int a){
     for(int i=2;i<=i;i++){
         if(a%i==0){
             return false;
         }
         return true;
     }
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i =1;i<=b;i++){
        if(isPrime(a)){
            cout<<a<<endl;
        }
    }
    return 0;
}