#include<bits/stdc++.h>
using namespace std;
class AbstractEmploye{
    virtual void Askforpromotion()=0;
};
class Employ:AbstractEmploye {
    private:
    string Name;
    string Company;
    int Age;
    public:
        void setName(string name){
            Name=name;
        }
        string getName(){
            return Name;
        }
         void setCompany(string company){
            Company=company;
        }
        string getCompany(){
            return Company;
        }
         void setAge(int age){
             if (age>=18)
            Age=age;
        }
        int getAge(){
            return Age;
        }
    
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
    void Askforpromotion(){
        if (Age>45)
            cout<<"promotion";
        else
            cout<<"not promotion";

    }

};
int main(){
    Employ employ1= Employ("dhiru","xyz",26);
    employ1.introduce();
    employ1.Askforpromotion();
    return 0;
}