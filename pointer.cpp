#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
   int *ptr;
   ptr=&a;

    cout<<*ptr<<endl;
    int **q=&ptr;
    cout<<*q<<endl;
    cout<<**q<<endl;
   /* int a[]={10,20,30};
    cout<<*a<<endl;
    int *ptr=a;
    for(int i=0;i<3;i++){
        cout<<*(a+i)<<"  ";
       // ptr++;
    }*/

    return 0;
}