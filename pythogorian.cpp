#include<bits/stdc++.h>
using namespace std;
bool max(int x,int y,int z){
    int a = max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;

    }

    if(a*a==b*b+c*c)
     return true;
    else
     return false;

}


int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if (max(x,y,z)){
        cout<<"pythogorian";
    }
    else{
        cout<<"not pythogorian";
    }
}
