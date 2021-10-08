#include<bits/stdc++.h>

using namespace std;
int main(){
       vector<int>item={1,2,4,5};
       int x;
    for(int i=0;i<6;i++){
           cin>>x;
           item.push_back(x);
       }
       
       for(auto i=item.begin();i != item.end();i++){
           cout<< *i<<endl;
           
       }/*
       for (int i = 0; i < item.size(); i++)
        cout << item[i] << " ";
*/  
    return 0;
}