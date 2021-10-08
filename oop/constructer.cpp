#include<bits/stdc++.h>
using namespace std;
class Employ{
    public:
    string Name;
    string Company;
    int Age;
    void introduce(){
        cout<<" name "<<Name<<endl;
        cout<<" company "<<Company<<endl;
        cout<<" age "<<Age<<endl;
    }
    Employ(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }

};
int main(){
    Employ employ1= Employ("dhiru","xyz",14);
    employ1.introduce();
    return 0;
}