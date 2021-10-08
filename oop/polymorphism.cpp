#include<bits/stdc++.h>
using namespace std;
class AbstractEmploye{
    virtual void Askforpromotion()=0;
};
class Employ:AbstractEmploye {
    private:
   
    string Company;
    int Age;
    protected:
     string Name;
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
        if (Age>18)
            cout<<"promotion";
        else
            cout<<"not promotion";

    }
    virtual void Work(){
        cout<<Name<<" is working in "<<Company<<endl;
    }

};

class Developer:public Employ{
public:
    string Fpl;
    Developer(string name,string company,int age ,string fpl)
    :Employ(name,company,age)
    {
        Fpl=fpl;
    }
    void fixbug(){
        cout<<Name<<" is "<<"favourate Language"<<Fpl<<endl;
    }
    void Work(){
        cout<<Name<<" is coding in "<<Fpl<<endl;
    }
    
};
class Teacher:public Employ{
public:
    string Subject;
    Teacher(string name,string company,int age ,string subject)
    :Employ(name,company,age)
    {
        Subject=subject;
    }
    void read(){
        cout<<Name<<" is teaching "<<Subject<<endl;
    }
     void Work(){
        cout<<Name<<" is teaching in "<<Subject <<endl;
    }
};
int main(){
    Developer d=Developer("Dhiru","xyz",35,"c++");
    Teacher t=Teacher("Dhiru","Abc",45,"History");
    Employ *e1 = &d;
    Employ *e2 = &t;

    e1->Work();
    e2->Work();

    
    return 0;
    
}