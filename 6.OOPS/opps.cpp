#include <iostream>
#include <string>
using namespace std;
class person{
    public:
        string name;
        int age;
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class student{
    public:
    string name;
    double* cgpaptr;

    student(string name, double cgpa)
    {
        this->name=name;
        cgpaptr = new double;
        *cgpaptr=cgpa;

    }
    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaptr<<endl;
    }
};
class Teacher
{
private:
    double salary;

public:
    // Non-Parameterized constructor
    Teacher()
    {
        cout << "Hi, I am Constructor" << endl;
        dept = "computer Science";
    }
    Teacher(string n, string d, string s, int sal) //parameter consturcutor
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    Teacher(Teacher &obj1) // copy constructor
    {
        cout<<"hi i am copy constructor"<<endl;
        this->name=obj1.name;
        this->subject=obj1.subject;
    }
    // properties or atributes
    string name;
    string dept;
    string subject;

    // methods or member Function
    void changesDep(string newDept)
    {
        dept = newDept;
    };
    void setSalary(double s)
    {
        salary = s;
    }
    double GetSalary()

    {
        return salary;
    }
    void GetInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Account
{
private:
    string password; // data hiding
    double balance;

public:
    string userName;
    int accountNumber;
};
int main()
{
    // Teacher t1("Anil", "Computer Science", "C++", 8999); // constructor call

    // t1.GetInfo();
    // Teacher t2(t1);
    // t2.GetInfo();

    // student s1("Anil",9);
    // s1.getInfo();
    // student s2(s1);
    // s2.getInfo();

    person p1("Anil",23);
    p1.getInfo();

    return 0;
}