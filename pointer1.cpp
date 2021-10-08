#include<bits/stdc++.h>
using namespace std;
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10;
    int b=20;
    int *c=&a;
    int *d=&b;
    swap(c,d);
    cout<<a<<" "<<b;
    return 0;
}