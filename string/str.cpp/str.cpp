#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string rev;
    for(int i=str.size()-1;i>=0;--i){
        rev.push_back(str[i]);
    }
    if(str==rev){
        cout<<str<<"is palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}