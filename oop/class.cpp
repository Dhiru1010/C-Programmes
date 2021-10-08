#include<bits/stdc++.h>
using namespace std;
class Employ{
    public:
    string name;
    string company;
    int age;
    void introduce(){
        cout<<" name "<<name<<endl;
        cout<<" company "<<company<<endl;
        cout<<" age "<<age<<endl;
    }
};
int main(){
    Employ employ1;
    employ1.name="dhiru";
    employ1.company="xyz";
    employ1.age=22;
    employ1.introduce()
    return 0;
}