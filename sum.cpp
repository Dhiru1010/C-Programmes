#include<bits/stdc++.h>
using namespace std;

int sum(int a){
    int temp=0;
    for(int i=1;i<=a;i++){
        temp+=i;
    }
    return temp;
}


int main(){
    int a,result;
    cin>>a;
    result=sum(a);
    cout<<result<<endl;
    }