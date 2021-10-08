#include<bits/stdc++.h>

using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    for(int i:l){
        cout<<i<<"  ";
    }cout<<endl;
    return 0;
}